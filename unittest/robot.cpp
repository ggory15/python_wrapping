#include <iostream>

#include <boost/test/unit_test.hpp>
#include <boost/utility/binary.hpp>

#include <python_wrapping/robot/2d_planar.hpp>

BOOST_AUTO_TEST_SUITE ( BOOST_TEST_MODULE )

BOOST_AUTO_TEST_CASE ( test_2d_planar )
{
    using namespace Eigen;

    std::cout << "test 2d planar" << std::endl;
    invkin::robot::Planar2d test_robot("2d_planar");

    BOOST_CHECK(test_robot.nq() == 2);
    BOOST_CHECK(test_robot.nv() == 2);
    
    std::cout << "robot name is " << "\t"  << test_robot.name() << std::endl;

    std::cout << "2d planar position w.r.t q0 = 0 and q1 = 0 is " << "\n" << test_robot.position(Vector2d(0,0)).transpose() << std::endl;  

    std::cout << "2d planar Jacobian w.r.t q0 = 0 and q1 = 0 is " << "\n" << test_robot.jacobian(Vector2d(0,0)) << std::endl;   
    
}
BOOST_AUTO_TEST_SUITE_END ()