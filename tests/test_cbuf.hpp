/*! \file       test_cbuf.hpp
 *  \brief      Circular buffer testing suite fixtures
 *  \author     Brian Reece
 *  \version    v0.3-alpha
 *  \date       12/31/2021
 */

#ifndef TEST_CBUF_HPP
#define TEST_CBUF_HPP
#include <string.h>

#include <boost/test/included/unit_test.hpp>

#include "structs/cbuf.h"
#include "structs/error.h"

struct cbuf_empty_fixture {
  cbuf_empty_fixture() {
    BOOST_TEST_REQUIRE(cbuf_init(&cbuf, sizeof(int), 10) == ERR_NONE);
    BOOST_TEST(cbuf.elements);
    BOOST_TEST(cbuf.head == 0);
    BOOST_TEST(cbuf.tail == 0);
    BOOST_TEST(cbuf.element_size == sizeof(int));
    BOOST_TEST(cbuf.capacity == 10);
  }

  ~cbuf_empty_fixture() { BOOST_TEST_REQUIRE(cbuf_deinit(&cbuf) == ERR_NONE); }

  cbuf_t cbuf;
};

struct cbuf_populated_fixture {
  cbuf_populated_fixture() {
    BOOST_TEST_REQUIRE(cbuf_init(&cbuf, sizeof(int), 5) == ERR_NONE);
    BOOST_TEST_REQUIRE(memcpy(cbuf.elements, values, 5 * sizeof(int)) !=
                       (void *)NULL);
  }

  ~cbuf_populated_fixture() {
    BOOST_TEST_REQUIRE(cbuf_deinit(&cbuf) == ERR_NONE);
  }

  cbuf_t cbuf;
  int values[5] = {1, 2, 3, 4, 5};
};

#endif  // TEST_CBUF_HPP