import python_wrapping as pw
import numpy as np

robot = pw.Planar2d("test_robot")
print "Robot's joint number is", robot.nq

print "Robot's name is", robot.name

q = np.matrix(np.zeros(2)).T

print "Robot's position w.r.t zero vector is", robot.position(q).T

# set q
q[0] = 0.5
q[1] = 1.0
robot.setJoint(q)

print "Current q is", robot.getJoint.T

print "Now, Jacobian with current q is", robot.Jacobian(robot.getJoint)




