
import sys
import os
sys.path.append(os.getcwd())


class PathController:
    '''
    A base for all joint based controllers
    '''

    def __init__(self, controller, planner, targetPose=None) -> None:
        super().__init__()


        self.controller = controller
        self.planner = planner

        
        self.targetPose = targetPose

        self.path = None

    def initStartPose(self, pose):
        self.targetPose = pose
        self.path = self.planner.genPath(0, 1, self.targetPose, self.targetPose)

    def newPathTo(self, target, tt):
        if self.targetPose is None:
            raise Exception("no current pose for the robot given")
        
        speed = 3
        self.path = self.planner.genPath(tt, tt+speed, self.targetPose, target)
        self.targetPose = target

    

    def set_time(self, t):
        '''
        Set the setpoint.
        '''
        if self.path is None:
            raise Exception("no path was generated")

        pose = self.path.atTime(t)
        self.controller.set_action(pose)

    def get_torque(self):
        return self.controller.get_torque()
        

    def error(self):
        return self.targetPose - self.controller.fk()
    
