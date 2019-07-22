#include "python_wrapping/robot/robot-base.hpp"

using namespace Eigen;
namespace invkin{
    namespace robot{
        RobotBase::RobotBase(const std::string & name, const int & joint_num) : m_name(name)
        {}
    }
}