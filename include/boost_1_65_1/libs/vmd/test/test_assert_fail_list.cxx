
//  (C) Copyright Edward Diener 2011-2015
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).

#include <boost/vmd/assert.hpp>
#include <boost/vmd/elem.hpp>
#include <boost/detail/lightweight_test.hpp>
#include <boost/preprocessor/comparison/equal.hpp>
#include <boost/preprocessor/tuple/elem.hpp>

int main()
  {
  
#if BOOST_PP_VARIADICS

  #define A_LIST_PLUS (mmf,(34,(^^,(!,BOOST_PP_NIL)))) 56
  
  BOOST_VMD_ASSERT(BOOST_PP_EQUAL(BOOST_PP_TUPLE_ELEM(1,BOOST_VMD_ELEM(0,A_LIST_PLUS,BOOST_VMD_RETURN_AFTER,BOOST_VMD_TYPE_LIST)),36),BOOST_VMD_TEST_FAIL_LIST)
  
#endif

  return boost::report_errors();
  
  }
