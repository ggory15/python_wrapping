#include "python_wrapping/robot/2d_planar.hpp"

using namespace Eigen;
namespace invkin{
    namespace robot{
        Planar2d::Planar2d(const std::string & name):
        RobotBase(name, 2), m_nq(2), m_nv(2), m_name(name)
        {
            m_pos.resize(2);
            m_J.resize(2,2);
        }
    
        int Planar2d::nq() const {return m_nq;}

        int Planar2d::nv() const {return m_nv;}

        std::string Planar2d::name() const {return m_name;}

        VectorXd Planar2d::position (const VectorXd & q) {
            assert (q.size() == 2);

            //m_pos.setZero();
            // m_pos(0) = 0.5 * cos(q(0)) + 1.0 * cos(q(0) + q(1));
            // m_pos(1) = 0.5 * sin(q(0)) + 1.0 * sin(q(0) + q(1));

            return m_pos;
        }
        VectorXd Planar2d::velocity (const VectorXd & q, const VectorXd & v)  {
            assert (q.size() == 2);
            assert (v.size() == 2);
            
            return jacobian(q) * v;
        }
        MatrixXd Planar2d::jacobian (const VectorXd & q)  {
            assert (q.size() == 2);
            // m_J.setZero();

            // m_J(0, 0) = -0.5 * sin(q(0)) -1.0 * sin(q(0) + q(1));
            // m_J(0, 1) = -1.0 * sin(q(0) + q(1));
            // m_J(1, 0) = 0.5 * cos(q(0)) + 1.0 * cos(q(0) + q(1));
            // m_J(1, 1) = 1.0 * cos(q(0) + q(1));

            return m_J;
        }

        void Planar2d::position (const VectorXd & q, VectorXd & pos){
            assert (q.size() == 2);
            assert (pos.size() == 2);
            pos = position(q);
        }
    }
}