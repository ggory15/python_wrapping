#include "python_wrapping/robot/2d_planar.hpp"

using namespace Eigen;
namespace invkin{
    namespace robot{
        Planar2d::Planar2d(const std::string & name){
            m_nq = 2;
            m_nv = 2;
            m_name = name;
        }
    
        int Planar2d::nq() const {return m_nq;}

        int Planar2d::nv() const {return m_nv;}

        std::string Planar2d::name() const {return m_name;}

        const Vector2d & Planar2d::position (const Vector2d & q){
            m_pos.setZero();
            m_pos(0) = 0.5 * cos(q(0)) + 1.0 * cos(q(0) + q(1));
            m_pos(1) = 0.5 * sin(q(0)) + 1.0 * sin(q(0) + q(1));

            return m_pos;
        }
        const Vector2d & Planar2d::velocity (const Vector2d & q, const Vector2d & v){
            return jacobian(q) * v;
        }
        const Matrix2d & Planar2d::jacobian (const Vector2d & q){
            m_J.setZero();

            m_J(0, 0) = -0.5 * sin(q(0)) -1.0 * sin(q(0) + q(1));
            m_J(0, 1) = -1.0 * sin(q(0) + q(1));
            m_J(1, 0) = 0.5 * cos(q(0)) + 1.0 * cos(q(0) + q(1));
            m_J(1, 1) = 1.0 * cos(q(0) + q(1));

            return m_J;
        }

        void Planar2d::position (const Vector2d & q, Vector2d & pos){
            pos = position(q);
        }
    }
}