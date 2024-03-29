#define BOOST_TEST_MAIN
#include "test.h"

// automatically registered test cases could be organized in test suites
BOOST_AUTO_TEST_SUITE( my_suite1 )

BOOST_AUTO_TEST_CASE( my_test1 )
{
    BOOST_CHECK( 2 == 1 );
}

//____________________________________________________________________________//

// this test case belongs to suite1 test suite
BOOST_AUTO_TEST_CASE( my_test2 )
{
    int i = 0;
    
    BOOST_CHECK_EQUAL( i, 2 );
    
    BOOST_CHECK_EQUAL( i, 0 );
}

BOOST_AUTO_TEST_SUITE_END()

//____________________________________________________________________________//

// this test case belongs to master test suite
BOOST_AUTO_TEST_CASE( my_test3 )
{
    int i = 0;
    
    BOOST_CHECK_EQUAL( i, 0 );
}

//____________________________________________________________________________//

BOOST_AUTO_TEST_SUITE( my_suite2 )

// this test case belongs to suite2 test suite
BOOST_AUTO_TEST_CASE( my_test4 )
{
    int i = 0;
    
    BOOST_CHECK_EQUAL( i, 1 );
}

BOOST_AUTO_TEST_SUITE( internal_suite )

// this test case belongs to my_suite2:internal_suite test suite

BOOST_AUTO_TEST_CASE( my_test5 )
{
    int i = 0;
    
    BOOST_CHECK_EQUAL( i, 1 );
}

BOOST_AUTO_TEST_SUITE_END()


BOOST_AUTO_TEST_SUITE_END()
