﻿//  Copyright (c) 2001-2010 Hartmut Kaiser
//  Copyright (c) 2001-2010 Joel de Guzman
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(SPIRIT_KARMA_ALTERNATIVE_MAR_01_2007_1117AM)
#define SPIRIT_KARMA_ALTERNATIVE_MAR_01_2007_1117AM

#if defined(_MSC_VER)
#pragma once
#endif

#include <boost/spirit/home/karma/detail/alternative_function.hpp>
#include <boost/spirit/home/karma/detail/extract_from.hpp>
#include <boost/spirit/home/karma/domain.hpp>
#include <boost/spirit/home/karma/generator.hpp>
#include <boost/spirit/home/karma/meta_compiler.hpp>
#include <boost/spirit/home/support/info.hpp>
#include <boost/spirit/home/support/unused.hpp>
#include <boost/spirit/home/support/detail/what_function.hpp>
#include <boost/fusion/include/any.hpp>
#include <boost/fusion/include/mpl.hpp>
#include <boost/fusion/include/for_each.hpp>
#include <boost/mpl/accumulate.hpp>
#include <boost/mpl/bitor.hpp>

namespace boost { namespace spirit
{
    ///////////////////////////////////////////////////////////////////////////
    // Enablers
    ///////////////////////////////////////////////////////////////////////////
    template <>
    struct use_operator<karma::domain, proto::tag::bitwise_or>  // enables |
      : mpl::true_ {};

    template <>
    struct flatten_tree<karma::domain, proto::tag::bitwise_or>  // flattens |
      : mpl::true_ {};

}}

///////////////////////////////////////////////////////////////////////////////
namespace boost { namespace spirit { namespace traits
{
    // specialization for sequences
    template <typename Elements>
    struct alternative_properties
    {
        struct element_properties
        {
            template <typename T>
            struct result;

            template <typename F, typename Element>
            struct result<F(Element)>
            {
                typedef properties_of<Element> type;
            };

            // never called, but needed for decltype-based result_of (C++0x)
            template <typename Element>
            typename result<element_properties(Element)>::type
            operator()(Element&) const;
        };

        typedef typename mpl::accumulate<
            typename fusion::result_of::transform<
                Elements, element_properties>::type
          , mpl::int_<karma::generator_properties::countingbuffer>
          , mpl::bitor_<mpl::_2, mpl::_1>
        >::type type;
    };

}}}

namespace boost { namespace spirit { namespace karma
{
    template <typename Elements>
    struct alternative : nary_generator<alternative<Elements> >
    {
        typedef typename traits::alternative_properties<Elements>::type 
            properties;

        template <typename Context, typename Iterator = unused_type>
        struct attribute
        {
            // Put all the element attributes in a tuple
            typedef typename traits::build_attribute_sequence<
                Elements, Context, mpl::identity, Iterator
            >::type all_attributes;

            // Ok, now make a variant over the attribute sequence. Note that
            // build_variant makes sure that 1) all attributes in the variant
            // are unique 2) puts the unused attribute, if there is any, to
            // the front and 3) collapses single element variants, variant<T>
            // to T.
            typedef typename traits::build_variant<all_attributes>::type type;
        };

        alternative(Elements const& elements)
          : elements(elements) {}

        template <
            typename OutputIterator, typename Context, typename Delimiter
          , typename Attribute>
        bool generate(OutputIterator& sink, Context& ctx
          , Delimiter const& d, Attribute const& attr) const
        {
            typedef detail::alternative_generate_function<
                OutputIterator, Context, Delimiter, Attribute
            > functor;

            // f return true if *any* of the parser succeeds
            functor f (sink, ctx, d, attr);
            return fusion::any(elements, f);
        }

        template <typename Context>
        info what(Context& context) const
        {
            info result("alternative");
            fusion::for_each(elements,
                spirit::detail::what_function<Context>(result, context));
            return result;
        }

        Elements elements;
    };

    ///////////////////////////////////////////////////////////////////////////
    // Generator generators: make_xxx function (objects)
    ///////////////////////////////////////////////////////////////////////////
    template <typename Elements, typename Modifiers>
    struct make_composite<proto::tag::bitwise_or, Elements, Modifiers>
      : make_nary_composite<Elements, alternative>
    {};

}}}

namespace boost { namespace spirit { namespace traits
{
    template <typename Elements>
    struct has_semantic_action<karma::alternative<Elements> >
      : nary_has_semantic_action<Elements> {};

}}}

#endif
