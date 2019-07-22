
#ifndef __python_expose_robot_hpp__
#define __python_expose_robot_hpp__


#include "python_wrapping/bindings/python/robot/2d_planar.hpp"

namespace invkin
{
  namespace python
  {
    void exposePlanar2d();
    inline void exposeRobot()
    {
      exposePlanar2d();
    }
    
  } // namespace python
} // namespace invkin
#endif // ifndef __python_expose_robot_hpp__
