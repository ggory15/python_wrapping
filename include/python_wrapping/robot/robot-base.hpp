#ifndef __invkin_robots_base_hpp__
#define __invkin_robots_base_hpp__

#include <string>
#include <vector>
#include <Eigen/Core>

namespace invkin
{
  namespace robot
  {
    class RobotBase{
        public:
            EIGEN_MAKE_ALIGNED_OPERATOR_NEW

            typedef Eigen::MatrixXd MatrixXd;
            typedef Eigen::VectorXd VectorXd;
            
            RobotBase(const std::string & name, const int & joint_num);
            virtual int nq() const = 0;
            virtual int nv() const = 0;

            virtual std::string name() const = 0;

            virtual VectorXd position (const VectorXd & q) = 0;
            virtual VectorXd velocity (const VectorXd & q, const VectorXd & v) = 0;
            virtual MatrixXd jacobian (const VectorXd & q) = 0;

            virtual void setJoint (const VectorXd & q) = 0;
            virtual const VectorXd & getJoint () const = 0;
            //void position (const VectorXd & q, VectorXd & pos) = 0;
        
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

#endif // ifndef __invkin_robots_base_hpp__