//
// Created by fgonzalez on 06/06/2023.
//

#define BOOST_TEST_MODULE ch_01
#include <boost/test/included/unit_test.hpp>
#include "Sales_item.h"

#include <string>
#include <sstream>

using namespace boost::unit_test;

int suma(int x, int y) {
    return x + y;
}

BOOST_AUTO_TEST_CASE(sumas) {
    BOOST_TEST_MESSAGE("Suma 3+2");
    BOOST_TEST(suma(3,2) == 5);
    int x = 5;
    int y = 7;
    BOOST_TEST_MESSAGE("Suma x+y = 12");
    BOOST_TEST(suma(x,y) == 12);
}

BOOST_AUTO_TEST_CASE(sales, * boost::unit_test::tolerance(0.0000001)) {
    Sales_item item1;
    Sales_item item2;
    std::string s1 = "0-201-88954-4 2 15.00";
    std::string s2 = "0-201-88954-4 5 12.00";
    std::istringstream ss1(s1);
    std::istringstream ss2(s2);
    ss1 >> item1;
    ss2 >> item2;
    BOOST_TEST(item1.isbn() == "0-201-88954-4");
    BOOST_TEST(item2.isbn() == "0-201-88954-4");
    BOOST_TEST(item1.avg_price() == 15.0);
    BOOST_TEST((item1 + item2).avg_price() == 12.857142);
}