
#ifndef __python_robot_2dplanar_hpp__
#define __python_robot_2dplanar_hpp__

#include <boost/python.hpp>
#include <string>
#include <eigenpy/eigenpy.hpp>
#include <boost/python/suite/indexing/vector_indexing_suite.hpp>

#include "python_wrapping/robot/2d_planar.hpp"
using namespace Eigen;
namespace invkin
{
  namespace python
  {    
    namespace bp = boost::python;
    
    template<typename Robot>
    struct RobotPythonVisitor
    : public boost::python::def_visitor< RobotPythonVisitor<Robot> >
    {
      typedef std::vector<std::string> std_vec;
      

      template<class PyClass>     

      void visit(PyClass& cl) const
      {
        cl
        .def(bp::init<std::string>((bp::arg("robotname")), "Default constructor for 2d Planar."))   
        .add_property("nq", &Robot::nq)
        .add_property("nv", &Robot::nv)

        .add_property("name", &Robot::name)
        .def("position", &RobotPythonVisitor::position, bp::arg("joint"))
        
        ;
      }
       static const Eigen::VectorXd & position(Robot & self, const Eigen::VectorXd q){
        Eigen::VectorXd pos;
        
        return pos;
      }
      
      static void expose(const std::string & class_name)
      {
        std::string doc = "2d Planar info.";
        bp::class_<Robot>(class_name.c_str(),
                          doc.c_str(),
                          bp::no_init)
        .def(RobotPythonVisitor<Robot>());
        ;
      }
    };
  }
}


#endif // ifndef __tsid_python_robot_wrapper_hpp__
