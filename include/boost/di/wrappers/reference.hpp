//
// Copyright (c) 2014 Krzysztof Jusiak (krzysztof at jusiak dot net)
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
#ifndef BOOST_DI_WRAPPERS_REFERENCE_HPP
#define BOOST_DI_WRAPPERS_REFERENCE_HPP

#include <boost/type.hpp>
#include <boost/ref.hpp>

namespace boost {
namespace di {
namespace wrappers {

template<typename T>
class reference
{
public:
    reference(const reference_wrapper<T>& object) // non explicit
        : object_(object)
    { }

    T& operator()(const type<T&>&) const {
        return object_;
    }

private:
    reference_wrapper<T> object_;
};

} // namespace wrappers
} // namespace di
} // namespace boost

#endif

