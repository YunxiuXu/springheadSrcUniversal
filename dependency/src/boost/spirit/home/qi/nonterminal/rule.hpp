﻿/*=============================================================================
    Copyright (c) 2001-2010 Joel de Guzman

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
==============================================================================*/
#if !defined(BOOST_SPIRIT_RULE_FEBRUARY_12_2007_1020AM)
#define BOOST_SPIRIT_RULE_FEBRUARY_12_2007_1020AM

#if defined(_MSC_VER)
#pragma once
#endif

#include <boost/assert.hpp>
#include <boost/function.hpp>
#include <boost/mpl/vector.hpp>
#include <boost/type_traits/add_reference.hpp>
#include <boost/type_traits/is_same.hpp>
#include <boost/utility/enable_if.hpp>

#include <boost/fusion/include/vector.hpp>
#include <boost/fusion/include/size.hpp>
#include <boost/fusion/include/make_vector.hpp>
#include <boost/fusion/include/cons.hpp>
#include <boost/fusion/include/as_list.hpp>
#include <boost/fusion/include/as_vector.hpp>

#include <boost/spirit/home/support/unused.hpp>
#include <boost/spirit/home/support/argument.hpp>
#include <boost/spirit/home/support/context.hpp>
#include <boost/spirit/home/support/info.hpp>
#include <boost/spirit/home/support/attributes.hpp>
#include <boost/spirit/home/support/nonterminal/extract_param.hpp>
#include <boost/spirit/home/support/nonterminal/locals.hpp>
#include <boost/spirit/home/qi/reference.hpp>
#include <boost/spirit/home/qi/nonterminal/detail/parameterized.hpp>
#include <boost/spirit/home/qi/nonterminal/detail/parser_binder.hpp>
#include <boost/spirit/home/qi/skip_over.hpp>

#if defined(BOOST_MSVC)
# pragma warning(push)
# pragma warning(disable: 4355) // 'this' : used in base member initializer list warning
#endif

namespace boost { namespace spirit { namespace qi
{
    BOOST_PP_REPEAT(SPIRIT_ATTRIBUTES_LIMIT, SPIRIT_USING_ATTRIBUTE, _)

    using spirit::_pass;
    using spirit::_val;
    using spirit::_a;
    using spirit::_b;
    using spirit::_c;
    using spirit::_d;
    using spirit::_e;
    using spirit::_f;
    using spirit::_g;
    using spirit::_h;
    using spirit::_i;
    using spirit::_j;

    using spirit::info;
    using spirit::locals;

    template <
        typename Iterator
      , typename T1 = unused_type
      , typename T2 = unused_type
      , typename T3 = unused_type
      , typename T4 = unused_type
    >
    struct rule
      : proto::extends<
            typename proto::terminal<
                reference<rule<Iterator, T1, T2, T3, T4> const>
            >::type
          , rule<Iterator, T1, T2, T3, T4>
        >
      , parser<rule<Iterator, T1, T2, T3, T4> >
    {
        typedef Iterator iterator_type;
        typedef rule<Iterator, T1, T2, T3, T4> this_type;
        typedef reference<this_type const> reference_;
        typedef typename proto::terminal<reference_>::type terminal;
        typedef proto::extends<terminal, this_type> base_type;
        typedef mpl::vector<T1, T2, T3, T4> template_params;

        // The rule's locals_type: a sequence of types to be used as local variables
        typedef typename
            spirit::detail::extract_locals<template_params>::type
        locals_type;

        // The rule's skip-parser type
        typedef typename
            spirit::detail::extract_component<
                qi::domain, template_params>::type
        skipper_type;

        // The rule's signature
        typedef typename
            spirit::detail::extract_sig<template_params>::type
        sig_type;

        // The rule's encoding type
        typedef typename
            spirit::detail::extract_encoding<template_params>::type
        encoding_type;

        // This is the rule's attribute type
        typedef typename
            spirit::detail::attr_from_sig<sig_type>::type
        attr_type;
        typedef typename add_reference<attr_type>::type attr_reference_type;

        // parameter_types is a sequence of types passed as parameters to the rule
        typedef typename
            spirit::detail::params_from_sig<sig_type>::type
        parameter_types;

        static size_t const params_size =
            fusion::result_of::size<parameter_types>::type::value;

        typedef context<
            fusion::cons<attr_reference_type, parameter_types>
          , locals_type>
        context_type;

        typedef function<
            bool(Iterator& first, Iterator const& last
              , context_type& context
              , skipper_type const& skipper
            )>
        function_type;

        typedef typename
            mpl::if_<
                is_same<encoding_type, unused_type>
              , unused_type
              , tag::char_code<tag::encoding, encoding_type>
            >::type
        encoding_modifier_type;

        explicit rule(std::string const& name_ = "unnamed-rule")
          : base_type(terminal::make(reference_(*this)))
          , name_(name_)
        {
        }

        rule(rule const& rhs)
          : base_type(terminal::make(reference_(*this)))
          , name_(rhs.name_)
          , f(rhs.f)
        {
        }

        template <typename Expr>
        rule(Expr const& expr, std::string const& name_ = "unnamed-rule")
          : base_type(terminal::make(reference_(*this)))
          , name_(name_)
        {
            // Report invalid expression error as early as possible.
            // If you got an error_invalid_expression error message here,
            // then the expression (expr) is not a valid spirit qi expression.
            BOOST_SPIRIT_ASSERT_MATCH(qi::domain, Expr);

            f = detail::bind_parser<mpl::false_>(
                compile<qi::domain>(expr, encoding_modifier_type()));
        }

        rule& operator=(rule const& rhs)
        {
            // The following assertion fires when you try to initialize a rule
            // from an uninitialized one. Did you mean to refer to the right
            // hand side rule instead of assigning from it? In this case you
            // should write lhs = rhs.alias();
            BOOST_ASSERT(rhs.f);

            f = rhs.f;
            name_ = rhs.name_;
            return *this;
        }

        std::string const& name() const
        {
            return name_;
        }

        void name(std::string const& str)
        {
            name_ = str;
        }

        template <typename Expr>
        rule& operator=(Expr const& expr)
        {
            // Report invalid expression error as early as possible.
            // If you got an error_invalid_expression error message here,
            // then the expression (expr) is not a valid spirit qi expression.
            BOOST_SPIRIT_ASSERT_MATCH(qi::domain, Expr);

            f = detail::bind_parser<mpl::false_>(
                compile<qi::domain>(expr, encoding_modifier_type()));
            return *this;
        }

        // g++ 3.3 barfs if this is a member function :(
        template <typename Expr>
        friend rule& operator%=(rule& r, Expr const& expr)
        {
            // Report invalid expression error as early as possible.
            // If you got an error_invalid_expression error message here,
            // then the expression (expr) is not a valid spirit qi expression.
            BOOST_SPIRIT_ASSERT_MATCH(qi::domain, Expr);

            r.f = detail::bind_parser<mpl::true_>(
                compile<qi::domain>(expr, encoding_modifier_type()));
            return r;
        }

        // non-const version needed to suppress proto's %= kicking in
        template <typename Expr>
        friend rule& operator%=(rule& r, Expr& expr)
        {
            return r %= static_cast<Expr const&>(expr);
        }

        template <typename Context, typename Iterator_>
        struct attribute
        {
            typedef attr_type type;
        };

        template <typename Context, typename Skipper, typename Attribute>
        bool parse(Iterator& first, Iterator const& last
          , Context& /*context*/, Skipper const& skipper
          , Attribute& attr) const
        {
            if (f)
            {
                // do a preskip if this is an implied lexeme
                if (is_same<skipper_type, unused_type>::value)
                    qi::skip_over(first, last, skipper);

                typedef traits::make_attribute<attr_type, Attribute> make_attribute;

                // do down-stream transformation, provides attribute for
                // rhs parser
                typedef traits::transform_attribute<
                    typename make_attribute::type, attr_type> transform;

                typename make_attribute::type made_attr = make_attribute::call(attr);
                typename transform::type attr_ = transform::pre(made_attr);

                // If you are seeing a compilation error here, you are probably
                // trying to use a rule or a grammar which has inherited
                // attributes, without passing values for them.
                context_type context(attr_);

                // If you are seeing a compilation error here stating that the
                // forth parameter can't be converted to a required target type
                // then you are probably trying to use a rule or a grammar with
                // an incompatible skipper type.
                if (f(first, last, context, skipper))
                {
                    // do up-stream transformation, this integrates the results
                    // back into the original attribute value, if appropriate
                    traits::post_transform(attr, attr_);
                    return true;
                }

                // inform attribute transformation of failed rhs
                traits::fail_transform(attr, attr_);
            }
            return false;
        }

        template <typename Context, typename Skipper
          , typename Attribute, typename Params>
        bool parse(Iterator& first, Iterator const& last
          , Context& caller_context, Skipper const& skipper
          , Attribute& attr, Params const& params) const
        {
            if (f)
            {
                // do a preskip if this is an implied lexeme
                if (is_same<skipper_type, unused_type>::value)
                    qi::skip_over(first, last, skipper);

                typedef traits::make_attribute<attr_type, Attribute> make_attribute;

                // do down-stream transformation, provides attribute for
                // rhs parser
                typedef traits::transform_attribute<
                    typename make_attribute::type, attr_type> transform;

                typename make_attribute::type made_attr = make_attribute::call(attr);
                typename transform::type attr_ = transform::pre(made_attr);

                // If you are seeing a compilation error here, you are probably
                // trying to use a rule or a grammar which has inherited
                // attributes, passing values of incompatible types for them.
                context_type context(attr_, params, caller_context);

                // If you are seeing a compilation error here stating that the
                // forth parameter can't be converted to a required target type
                // then you are probably trying to use a rule or a grammar with
                // an incompatible skipper type.
                if (f(first, last, context, skipper))
                {
                    // do up-stream transformation, this integrates the results
                    // back into the original attribute value, if appropriate
                    traits::post_transform(attr, attr_);
                    return true;
                }

                // inform attribute transformation of failed rhs
                traits::fail_transform(attr, attr_);
            }
            return false;
        }

        template <typename Context>
        info what(Context& /*context*/) const
        {
            return info(name_);
        }

        reference_ alias() const
        {
            return reference_(*this);
        }

        typename proto::terminal<this_type>::type copy() const
        {
            typename proto::terminal<this_type>::type result = {*this};
            return result;
        }

        // bring in the operator() overloads
        rule const& get_parameterized_subject() const { return *this; }
        typedef rule parameterized_subject_type;
        #include <boost/spirit/home/qi/nonterminal/detail/fcall.hpp>

        std::string name_;
        function_type f;
    };
}}}

#if defined(BOOST_MSVC)
# pragma warning(pop)
#endif

#endif
