#ifndef __invkin_robots_2d_hpp__
#define __invkin_robots_2d_hpp__

#include "python_wrapping/robot/robot-base.hpp"

namespace invkin
{
  namespace robot
  {
    class Planar2d : public RobotBase{
        public:
            EIGEN_MAKE_ALIGNED_OPERATOR_NEW

            typedef Eigen::MatrixXd MatrixXd;
            typedef Eigen::VectorXd VectorXd;
            
            Planar2d(const std::string & name);
            int nq() const;
            int nv() const;
            std::string name() const;

            VectorXd position (const VectorXd & q);
            VectorXd velocity (const VectorXd & q, const VectorXd & v);
            MatrixXd jacobian (const VectorXd & q);

            void setJoint (const VectorXd & q);
            const VectorXd & getJoint () const;
        
        protected:
            int m_nq;
            int m_nv;
            std::string m_name;

            VectorXd m_q, m_pos;
            VectorXd m_v;
            MatrixXd m_J;

    };
  }
}

#endif // ifndef __invkin_robots_2d_hpp__