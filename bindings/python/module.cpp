#include <eigenpy/eigenpy.hpp>
#include <eigenpy/geometry.hpp>

#include "python_wrapping/bindings/python/robot/expose-robots.hpp"

#include <boost/python/module.hpp>
#include <boost/python/def.hpp>
#include <boost/python/tuple.hpp>
#include <boost/python/to_python_converter.hpp>

namespace bp = boost::python;
using namespace invkin::python;

BOOST_PYTHON_MODULE(libpython_wrapping_pywrap)
{
  eigenpy::enableEigenPy();
  eigenpy::exposeAngleAxis();
  eigenpy::exposeQuaternion();

  typedef Eigen::Matrix<double,6,6> Matrix6d;
  typedef Eigen::Matrix<double,6,1> Vector6d;
  typedef Eigen::Matrix<double,6,Eigen::Dynamic> Matrix6x;
  typedef Eigen::Matrix<double,3,Eigen::Dynamic> Matrix3x;
  
  eigenpy::enableEigenPySpecific<Matrix6d>();
  eigenpy::enableEigenPySpecific<Vector6d>();
  eigenpy::enableEigenPySpecific<Matrix6x>();
  eigenpy::enableEigenPySpecific<Matrix3x>();
  eigenpy::enableEigenPySpecific<Eigen::MatrixXd>();
  eigenpy::enableEigenPySpecific<Eigen::Vector3d>();
  
  exposeRobot();  
}
 
