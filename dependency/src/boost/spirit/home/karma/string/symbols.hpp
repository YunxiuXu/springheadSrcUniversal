﻿//  Copyright (c) 2001-2010 Hartmut Kaiser
// 
//  Distributed under the Boost Software License, Version 1.0. (See accompanying 
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(BOOST_SPIRIT_KARMA_SYMBOLS_NOV_23_2009_1251PM)
#define BOOST_SPIRIT_KARMA_SYMBOLS_NOV_23_2009_1251PM

#include <boost/spirit/home/support/common_terminals.hpp>
#include <boost/spirit/home/support/info.hpp>
#include <boost/spirit/home/support/unused.hpp>
#include <boost/spirit/home/support/attributes.hpp>
#include <boost/spirit/home/karma/domain.hpp>
#include <boost/spirit/home/karma/meta_compiler.hpp>
#include <boost/spirit/home/karma/reference.hpp>
#include <boost/spirit/home/karma/delimit_out.hpp>
#include <boost/spirit/home/karma/detail/get_casetag.hpp>
#include <boost/spirit/home/karma/detail/string_generate.hpp>
#include <boost/config.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/mpl/if.hpp>
#include <map>
#include <set>

#if defined(BOOST_MSVC)
# pragma warning(push)
# pragma warning(disable: 4355) // 'this' : used in base member initializer list warning
#endif

///////////////////////////////////////////////////////////////////////////////
namespace boost { namespace spirit { namespace karma
{
    template <typename Attribute, typename T>
    struct symbols_lookup
      : mpl::if_<
            traits::not_is_unused<T>
          , std::map<Attribute, T>
          , std::set<Attribute> 
        >
    {};

    ///////////////////////////////////////////////////////////////////////////
    template <
        typename Attribute = char, typename T = unused_type
      , typename Lookup = typename symbols_lookup<Attribute, T>::type
      , typename CharEncoding = unused_type, typename Tag = unused_type>
    struct symbols
      : proto::extends<
            typename proto::terminal<
                reference<symbols<Attribute, T, Lookup, CharEncoding, Tag> >
            >::type
          , symbols<Attribute, T, Lookup, CharEncoding, Tag> >
      , primitive_generator<
            symbols<Attribute, T, Lookup, CharEncoding, Tag> >
    {
        typedef T value_type;       // the value associated with each entry

        typedef reference<symbols> reference_;
        typedef typename proto::terminal<reference_>::type terminal;
        typedef proto::extends<terminal, symbols> base_type;

        template <typename Context, typename Unused>
        struct attribute
        {
            typedef Attribute type;
        };

        symbols()
          : base_type(terminal::make(reference_(*this)))
          , add(*this)
          , remove(*this)
          , lookup(new Lookup())
        {}

        symbols(symbols const& syms)
          : base_type(terminal::make(reference_(*this)))
          , add(*this)
          , remove(*this)
          , lookup(syms.lookup)
        {}

        template <typename CharEncoding_, typename Tag_>
        symbols(symbols<Attribute, T, Lookup, CharEncoding_, Tag_> const& syms)
          : base_type(terminal::make(reference_(*this)))
          , add(*this)
          , remove(*this)
          , lookup(syms.lookup)
        {}

        template <typename Symbols, typename Data>
        symbols(Symbols const& syms, Data const& data)
          : base_type(terminal::make(reference_(*this)))
          , add(*this)
          , remove(*this)
          , lookup(new Lookup())
        {
            typename range_const_iterator<Symbols>::type si = boost::begin(syms);
            typename range_const_iterator<Data>::type di = boost::begin(data);
            while (si != boost::end(syms))
                add(*si++, *di++);
        }

        symbols&
        operator=(symbols const& rhs)
        {
            *lookup = *rhs.lookup;
            return *this;
        }

        template <typename CharEncoding_, typename Tag_>
        symbols&
        operator=(symbols<Attribute, T, Lookup, CharEncoding_, Tag_> const& rhs)
        {
            *lookup = *rhs.lookup;
            return *this;
        }

        void clear()
        {
            lookup->clear();
        }

        struct adder;
        struct remover;

        template <typename Attr, typename T_>
        adder const&
        operator=(std::pair<Attr, T_> const& p)
        {
            lookup->clear();
            return add(p.first, p.second);
        }

        template <typename Attr, typename T_>
        friend adder const&
        operator+= (symbols& sym, std::pair<Attr, T_> const& p)
        {
            return sym.add(p.first, p.second);
        }

        template <typename Attr>
        friend remover const&
        operator-= (symbols& sym, Attr const& attr)
        {
            return sym.remove(attr);
        }

        // non-const version needed to suppress proto's += kicking in
        template <typename Attr, typename T_>
        friend adder const&
        operator+= (symbols& sym, std::pair<Attr, T_>& p)
        {
            return sym.add(p.first, p.second);
        }

        // non-const version needed to suppress proto's -= kicking in
        template <typename Attr>
        friend remover const&
        operator-= (symbols& sym, Attr& str)
        {
            return sym.remove(attr);
        }

        template <typename F>
        void for_each(F f) const
        {
            std::for_each(lookup->begin(), lookup->end(), f);
        }

        template <typename Attr>
        value_type* find(Attr const& attr)
        {
            typename Lookup::iterator it = lookup->find(attr);
            return (it != lookup->end()) ? &(*it).second : 0;
        }

        template <typename Attr>
        value_type& at(Attr const& attr)
        {
            return (*lookup)[attr];
        }

        ///////////////////////////////////////////////////////////////////////
        template <typename OutputIterator, typename Context, typename Delimiter
          , typename Attr>
        bool generate(OutputIterator& sink, Context&, Delimiter const& d
          , Attr const& attr) const
        {
            typename Lookup::iterator it = lookup->find(attr);
            if (it == lookup->end())
                return false;

            return spirit::karma::detail::string_generate(
                       sink, (*it).second, CharEncoding(), Tag()) &&
                   spirit::karma::delimit_out(sink, d);
        }

        template <typename Context>
        info what(Context&) const
        {
            return info("symbols");
        }

        ///////////////////////////////////////////////////////////////////////
        struct adder
        {
            template <typename, typename = unused_type>
            struct result { typedef adder const& type; };

            adder(symbols& sym)
              : sym(sym)
            {
            }

            template <typename Attr>
            adder const&
            operator()(Attr const& attr, T const& val = T()) const
            {
                sym.lookup->insert(typename Lookup::value_type(attr, val));
                return *this;
            }

            template <typename Attr>
            adder const&
            operator, (Attr const& attr) const
            {
                sym.lookup->insert(typename Lookup::value_type(attr, T()));
                return *this;
            }

            symbols& sym;

        private:
            // silence MSVC warning C4512: assignment operator could not be generated
            adder& operator= (adder const&);
        };

        struct remover
        {
            template <typename>
            struct result { typedef remover const& type; };

            remover(symbols& sym)
              : sym(sym)
            {
            }

            template <typename Attr>
            remover const&
            operator()(Attr const& attr) const
            {
                sym.lookup->erase(attr);
                return *this;
            }

            template <typename Attr>
            remover const&
            operator, (Attr const& attr) const
            {
                sym.lookup->erase(attr);
                return *this;
            }

            symbols& sym;

        private:
            // silence MSVC warning C4512: assignment operator could not be generated
            remover& operator= (remover const&);
        };

        adder add;
        remover remove;
        shared_ptr<Lookup> lookup;
    };

    ///////////////////////////////////////////////////////////////////////////
    // specialization for unused stored type
    template <
        typename Attribute, typename Lookup
      , typename CharEncoding, typename Tag>
    struct symbols<Attribute, unused_type, Lookup, CharEncoding, Tag>
      : proto::extends<
            typename proto::terminal<
                spirit::karma::reference<
                    symbols<Attribute, unused_type, Lookup, CharEncoding, Tag> >
            >::type
          , symbols<Attribute, unused_type, Lookup, CharEncoding, Tag>
        >
      , spirit::karma::generator<
            symbols<Attribute, unused_type, Lookup, CharEncoding, Tag> >
    {
        typedef unused_type value_type;  // the value associated with each entry

        typedef spirit::karma::reference<symbols> reference_;
        typedef typename proto::terminal<reference_>::type terminal;
        typedef proto::extends<terminal, symbols> base_type;

        template <typename Context, typename Unused>
        struct attribute
        {
            typedef Attribute type;
        };

        symbols()
          : base_type(terminal::make(reference_(*this)))
          , add(*this)
          , remove(*this)
          , lookup(new Lookup())
        {}

        symbols(symbols const& syms)
          : base_type(terminal::make(reference_(*this)))
          , add(*this)
          , remove(*this)
          , lookup(syms.lookup)
        {}

        template <typename CharEncoding_, typename Tag_>
        symbols(symbols<Attribute, unused_type, Lookup, CharEncoding_, Tag_> const& syms)
          : base_type(terminal::make(reference_(*this)))
          , add(*this)
          , remove(*this)
          , lookup(syms.lookup)
        {}

        template <typename Symbols, typename Data>
        symbols(Symbols const& syms, Data const& data)
          : base_type(terminal::make(reference_(*this)))
          , add(*this)
          , remove(*this)
          , lookup(new Lookup())
        {
            typename range_const_iterator<Symbols>::type si = boost::begin(syms);
            typename range_const_iterator<Data>::type di = boost::begin(data);
            while (si != boost::end(syms))
                add(*si++, *di++);
        }

        symbols&
        operator=(symbols const& rhs)
        {
            *lookup = *rhs.lookup;
            return *this;
        }

        template <typename CharEncoding_, typename Tag_>
        symbols&
        operator=(symbols<Attribute, unused_type, Lookup, CharEncoding_, Tag_> const& rhs)
        {
            *lookup = *rhs.lookup;
            return *this;
        }

        void clear()
        {
            lookup->clear();
        }

        struct adder;
        struct remover;

        template <typename Attr>
        adder const&
        operator=(Attr const& attr)
        {
            lookup->clear();
            return add(attr);
        }

        template <typename Attr>
        friend adder const&
        operator+= (symbols& sym, Attr const& attr)
        {
            return sym.add(attr);
        }

        template <typename Attr>
        friend remover const&
        operator-= (symbols& sym, Attr const& attr)
        {
            return sym.remove(attr);
        }

        // non-const version needed to suppress proto's += kicking in
        template <typename Attr>
        friend adder const&
        operator+= (symbols& sym, Attr& attr)
        {
            return sym.add(attr);
        }

        // non-const version needed to suppress proto's -= kicking in
        template <typename Attr>
        friend remover const&
        operator-= (symbols& sym, Attr& str)
        {
            return sym.remove(attr);
        }

        template <typename F>
        void for_each(F f) const
        {
            std::for_each(lookup->begin(), lookup->end(), f);
        }

        template <typename Attr>
        value_type* find(Attr const& attr)
        {
            typename Lookup::iterator it = lookup->find(attr);
            return (it != lookup->end()) ? &unused : 0;
        }

        template <typename Attr>
        value_type& at(Attr const& attr)
        {
            typename Lookup::iterator it = lookup->find(attr);
            if (it == lookup->end()) 
                add(attr);
            return &unused;
        }

        ///////////////////////////////////////////////////////////////////////
        template <typename OutputIterator, typename Context, typename Delimiter
          , typename Attr>
        bool generate(OutputIterator& sink, Context&, Delimiter const& d
          , Attr const& attr) const
        {
            typename Lookup::iterator it = lookup->find(attr);
            if (it == lookup->end())
                return false;

            return spirit::karma::detail::string_generate(
                       sink, attr, CharEncoding(), Tag()) &&
                   spirit::karma::delimit_out(sink, d);
        }

        template <typename Context>
        info what(Context&) const
        {
            return info("symbols");
        }

        ///////////////////////////////////////////////////////////////////////
        struct adder
        {
            template <typename, typename = unused_type>
            struct result { typedef adder const& type; };

            adder(symbols& sym)
              : sym(sym)
            {
            }

            template <typename Attr>
            adder const&
            operator()(Attr const& attr) const
            {
                sym.lookup->insert(attr);
                return *this;
            }

            template <typename Attr>
            adder const&
            operator, (Attr const& attr) const
            {
                sym.lookup->insert(attr);
                return *this;
            }

            symbols& sym;

        private:
            // silence MSVC warning C4512: assignment operator could not be generated
            adder& operator= (adder const&);
        };

        struct remover
        {
            template <typename>
            struct result { typedef remover const& type; };

            remover(symbols& sym)
              : sym(sym)
            {
            }

            template <typename Attr>
            remover const&
            operator()(Attr const& attr) const
            {
                sym.lookup->erase(attr);
                return *this;
            }

            template <typename Attr>
            remover const&
            operator, (Attr const& attr) const
            {
                sym.lookup->erase(attr);
                return *this;
            }

            symbols& sym;

        private:
            // silence MSVC warning C4512: assignment operator could not be generated
            remover& operator= (remover const&);
        };

        adder add;
        remover remove;
        shared_ptr<Lookup> lookup;
    };

    ///////////////////////////////////////////////////////////////////////////
    // Generator generators: make_xxx function (objects)
    ///////////////////////////////////////////////////////////////////////////
    template <typename Attribute, typename T, typename Lookup
      , typename CharEnconding, typename Tag, typename Modifiers>
    struct make_primitive<
        reference<symbols<Attribute, T, Lookup, CharEnconding, Tag> >
      , Modifiers>
    {
        static bool const lower = 
            has_modifier<Modifiers, tag::char_code_base<tag::lower> >::value;
        static bool const upper = 
            has_modifier<Modifiers, tag::char_code_base<tag::upper> >::value;

        typedef reference<
            symbols<Attribute, T, Lookup, CharEnconding, Tag> 
        > reference_;

        typedef typename mpl::if_c<
            lower || upper
          , symbols<
                Attribute, T, Lookup
              , typename spirit::detail::get_encoding_with_case<
                    Modifiers, unused_type, lower || upper>::type
              , typename detail::get_casetag<Modifiers, lower || upper>::type>
          , reference_>::type
        result_type;

        result_type operator()(reference_ ref, unused_type) const
        {
            return result_type(ref.ref.get());
        }
    };
}}}

#if defined(BOOST_MSVC)
# pragma warning(pop)
#endif

#endif

