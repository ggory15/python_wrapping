#ifndef __invkin_ik_hpp__
#define __invkin_ik_hpp__

#include <string>
#include <vector>
#include <Eigen/Core>

#include "python_wrapping/robot/2d_planar.hpp"

namespace invkin
{
  namespace ik
  {
    class InvKin{
        public:
            EIGEN_MAKE_ALIGNED_OPERATOR_NEW

            typedef Eigen::Matrix2d Matrix2d;
            typedef Eigen::Vector2d Vector2d;
            
            InvKin(const std::string & name);
            int nq() const;
            int nv() const;
            std::string name() const;

            const Vector2d & position (const Vector2d & q);
            const Vector2d & velocity (const Vector2d & q, const Vector2d & v);
            const Matrix2d & jacobian (const Vector2d & q);

            void position (const Vector2d & q, Vector2d & pos);
        
        protected:
            int m_nq;
            int m_nv;
            std::string m_name;

            Vector2d m_q, m_pos;
            Vector2d m_v;
            Matrix2d m_J;

    };
  }
}

#endif // ifndef __invkin_ik_hpp__