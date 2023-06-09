﻿//  Copyright (c) 2001-2010 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(BOOST_SPIRIT_KARMA_LIT_FEB_22_2007_0534PM)
#define BOOST_SPIRIT_KARMA_LIT_FEB_22_2007_0534PM

#if defined(_MSC_VER)
#pragma once
#endif

#include <boost/spirit/home/support/common_terminals.hpp>
#include <boost/spirit/home/support/string_traits.hpp>
#include <boost/spirit/home/support/info.hpp>
#include <boost/spirit/home/support/char_class.hpp>
#include <boost/spirit/home/support/container.hpp>
#include <boost/spirit/home/support/detail/get_encoding.hpp>
#include <boost/spirit/home/karma/domain.hpp>
#include <boost/spirit/home/karma/meta_compiler.hpp>
#include <boost/spirit/home/karma/delimit_out.hpp>
#include <boost/spirit/home/karma/auxiliary/lazy.hpp>
#include <boost/spirit/home/karma/detail/get_casetag.hpp>
#include <boost/spirit/home/karma/detail/extract_from.hpp>
#include <boost/spirit/home/karma/detail/string_generate.hpp>
#include <boost/spirit/home/karma/detail/string_compare.hpp>
#include <boost/fusion/include/at.hpp>
#include <boost/fusion/include/vector.hpp>
#include <boost/fusion/include/cons.hpp>
#include <boost/mpl/if.hpp>
#include <boost/mpl/or.hpp>
#include <boost/mpl/assert.hpp>
#include <boost/mpl/bool.hpp>
#include <string>

///////////////////////////////////////////////////////////////////////////////
namespace boost { namespace spirit
{
    ///////////////////////////////////////////////////////////////////////////
    // Enablers
    ///////////////////////////////////////////////////////////////////////////
    template <typename CharEncoding>
    struct use_terminal<karma::domain
        , tag::char_code<tag::string, CharEncoding> >     // enables string
      : mpl::true_ {};

    template <typename T>
    struct use_terminal<karma::domain, T
      , typename enable_if<traits::is_string<T> >::type>  // enables string literals
      : mpl::true_ {};

    template <typename CharEncoding, typename A0>
    struct use_terminal<karma::domain
      , terminal_ex<
            tag::char_code<tag::string, CharEncoding>     // enables string(str)
          , fusion::vector1<A0> >
    > : traits::is_string<A0> {};

    template <typename CharEncoding>                      // enables string(f)
    struct use_lazy_terminal<
        karma::domain
      , tag::char_code<tag::string, CharEncoding>
      , 1 /*arity*/
    > : mpl::true_ {};

}} 

///////////////////////////////////////////////////////////////////////////////
namespace boost { namespace spirit { namespace karma
{
    ///////////////////////////////////////////////////////////////////////////
    // generate literal strings from a given parameter
    ///////////////////////////////////////////////////////////////////////////
    template <typename CharEncoding, typename Tag>
    struct any_string
      : primitive_generator<any_string<CharEncoding, Tag> >
    {
        typedef typename CharEncoding::char_type char_type;
        typedef CharEncoding char_encoding;

        template <typename Context, typename Unused>
        struct attribute
        {
            typedef std::basic_string<char_type> type;
        };

        // lit has an attached attribute
        template <typename OutputIterator, typename Context, typename Delimiter
          , typename Attribute>
        static bool
        generate(OutputIterator& sink, Context& context, Delimiter const& d, 
            Attribute const& attr)
        {
            if (!traits::has_optional_value(attr))
                return false;

            return 
                karma::detail::string_generate(sink
                  , traits::extract_from(attr, context), char_encoding(), Tag()) &&
                karma::delimit_out(sink, d);      // always do post-delimiting
        }

        // this lit has no attribute attached, it needs to have been
        // initialized from a direct literal
        template <typename OutputIterator, typename Context, typename Delimiter>
        static bool generate(OutputIterator&, Context&, Delimiter const&, 
            unused_type const&)
        {
            // It is not possible (doesn't make sense) to use string without
            // providing any attribute, as the generator doesn't 'know' what
            // character to output. The following assertion fires if this
            // situation is detected in your code.
            BOOST_SPIRIT_ASSERT_MSG(false, string_not_usable_without_attribute, ());
            return false;
        }

        template <typename Context>
        static info what(Context const& /*context*/)
        {
            return info("any-string");
        }
    };

    ///////////////////////////////////////////////////////////////////////////
    // generate literal strings
    ///////////////////////////////////////////////////////////////////////////
    template <typename String, typename CharEncoding, typename Tag, bool no_attribute>
    struct literal_string
      : primitive_generator<literal_string<String, CharEncoding, Tag, no_attribute> >
    {
        typedef CharEncoding char_encoding;
        typedef typename
            remove_const<typename traits::char_type_of<String>::type>::type
        char_type;
        typedef std::basic_string<char_type> string_type;

        template <typename Context, typename Unused>
        struct attribute
          : mpl::if_c<no_attribute, unused_type, string_type>
        {};

        literal_string(typename add_reference<String>::type str)
          : str_(str)
        {}

        // A string("...") which additionally has an associated attribute emits
        // its immediate literal only if it matches the attribute, otherwise
        // it fails.
        template <
            typename OutputIterator, typename Context, typename Delimiter
          , typename Attribute>
        bool generate(OutputIterator& sink, Context& context
          , Delimiter const& d, Attribute const& attr) const
        {
            if (!traits::has_optional_value(attr))
                return false;

            // fail if attribute isn't matched by immediate literal
            using spirit::traits::get_c_string;
            if (!detail::string_compare(
                    get_c_string(traits::extract_from(attr, context))
                  , get_c_string(str_), char_encoding(), Tag()))
            {
                return false;
            }
            return detail::string_generate(sink, str_, char_encoding(), Tag()) && 
                   karma::delimit_out(sink, d);      // always do post-delimiting
        }

        // A string("...") without any associated attribute just emits its 
        // immediate literal
        template <typename OutputIterator, typename Context, typename Delimiter>
        bool generate(OutputIterator& sink, Context&, Delimiter const& d
          , unused_type) const
        {
            return detail::string_generate(sink, str_, char_encoding(), Tag()) && 
                   karma::delimit_out(sink, d);      // always do post-delimiting
        }

        template <typename Context>
        info what(Context const& /*context*/) const
        {
            return info("literal-string", str_);
        }

        string_type str_;
    };

    ///////////////////////////////////////////////////////////////////////////
    // Generator generators: make_xxx function (objects)
    ///////////////////////////////////////////////////////////////////////////

    // string
    template <typename CharEncoding, typename Modifiers>
    struct make_primitive<
        tag::char_code<tag::string, CharEncoding>
      , Modifiers>
    {
        static bool const lower = 
            has_modifier<Modifiers, tag::char_code_base<tag::lower> >::value;
        static bool const upper = 
            has_modifier<Modifiers, tag::char_code_base<tag::upper> >::value;

        typedef any_string<
            typename spirit::detail::get_encoding_with_case<
                Modifiers, CharEncoding, lower || upper>::type
          , typename detail::get_casetag<Modifiers, lower || upper>::type
        > result_type;

        result_type operator()(unused_type, unused_type) const
        {
            return result_type();
        }
    };

    // string literal 
    template <typename T, typename Modifiers>
    struct make_primitive<T, Modifiers
      , typename enable_if<traits::is_string<T> >::type>
    {
        static bool const lower =
            has_modifier<Modifiers, tag::char_code_base<tag::lower> >::value;

        static bool const upper =
            has_modifier<Modifiers, tag::char_code_base<tag::upper> >::value;

        typedef typename add_const<T>::type const_string;
        typedef literal_string<
            const_string
          , typename spirit::detail::get_encoding_with_case<
                Modifiers, unused_type, lower || upper>::type
          , typename detail::get_casetag<Modifiers, lower || upper>::type
          , true
        > result_type;

        result_type operator()(
            typename add_reference<const_string>::type str, unused_type) const
        {
            return result_type(str);
        }
    };

    template <typename CharEncoding, typename Modifiers, typename A0>
    struct make_primitive<
        terminal_ex<
            tag::char_code<tag::string, CharEncoding>
          , fusion::vector1<A0> >
      , Modifiers>
    {
        static bool const lower = 
            has_modifier<Modifiers, tag::char_code_base<tag::lower> >::value;
        static bool const upper = 
            has_modifier<Modifiers, tag::char_code_base<tag::upper> >::value;

        typedef typename add_const<A0>::type const_string;
        typedef literal_string<
            const_string
          , typename spirit::detail::get_encoding_with_case<
                Modifiers, unused_type, lower || upper>::type
          , typename detail::get_casetag<Modifiers, lower || upper>::type
          , false
        > result_type;

        template <typename Terminal>
        result_type operator()(Terminal const& term, unused_type) const
        {
            return result_type(fusion::at_c<0>(term.args));
        }
    };

}}}   // namespace boost::spirit::karma

#endif
