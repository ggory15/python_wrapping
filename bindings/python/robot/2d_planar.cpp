#include "python_wrapping/bindings/python/robot/2d_planar.hpp"
#include "python_wrapping/bindings/python/robot/expose-robots.hpp"

namespace invkin
{
  namespace python
  {
    void exposePlanar2d()
    {
      RobotPythonVisitor<invkin::robot::Planar2d>::expose("Planar2d");
    }
  }
}
