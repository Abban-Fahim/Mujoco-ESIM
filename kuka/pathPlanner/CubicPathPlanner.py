import numpy as np

class CubicPolyPathGenerator:

    def __init__(self, x0, x1, dx0, dx1, ddx0, ddx1, t0, t1) -> None:
        self.x0 = x0
        self.x1 = x1
        self.dx0 = dx0
        self.dx1 = dx1
        self.ddx0 = ddx0
        self.ddx1 = ddx1
        self.t0 = t0
        self.t1 = t1

    def x(self):
        return np.array([[self.x0], [self.x1], [self.dx0], [self.dx1], [self.ddx0], [self.ddx1]])

    def T0(self, t):
        return np.array([pow(t, x) for x in range(6)])

    def T1(self, t):
        return np.array([(x+1)*pow(t, x) if x > -1 else 0 for x in range(-1,5)])

    def T2(self, t):
        return np.array([(x+1)*(x+2)*pow(t, x) if x > -1 else 0 for x in range(-2,4)])

    def T(self):
        # T = np.array([[1, t0, t0**2, t0**3, t0**4, t0**5],
        #              [1, t1, t1**2, t1**3, t1**4, t1**5],
        #              [0 , 1, 2*t0, 3*t0**2, 4*t0**3, 5*t0**4],
        #              [0 , 1, 2*t1, 3*t1**2, 4*t1**3, 5*t1**4],
        #              [0 , 0, 2, 6*t0, 12*t0**2, 20*t0**3],
        #              [0 , 0, 2, 6*t1, 12*t1**2, 20*t1**3]])
        return np.array([self.T0(self.t0),
                        self.T0(self.t1),
                        self.T1(self.t0),
                        self.T1(self.t1),
                        self.T2(self.t0),
                        self.T2(self.t1)])

    def cx(self, t):
        # T = np.array([[1, t, t**2, t**3, t**4, t**5],
        #             [0 , 1, 2*t, 3*t**2, 4*t**3, 5*t**4],
        #             [0 , 0, 2, 6*t, 12*t**2, 20*t**3]])

        T = np.array([self.T0(t),
                    self.T1(t),
                    self.T2(t)])

        return T @ self.params()

    def params(self):
        return np.linalg.inv(self.T()) @ self.x()
    
    
    
