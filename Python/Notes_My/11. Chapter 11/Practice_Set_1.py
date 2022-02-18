class two_d_Vector :
    def __init__(self,x,y) :
        self.x = x
        self.y = y
           
    def getvalues(self):
        print(f"x co-ordinate = {self.x}")
        print(f"y co-ordinate = {self.y}")
        
class three_d_Vector(two_d_Vector) :
    def __init__(self,x,y,z) :
        self.x = x
        self.y = y
        self.z = z
        super().__init__(x,y)
        
    def getvalues(self):
        print(f"x co-ordinate = {self.x}")
        print(f"y co-ordinate = {self.y}")
        print(f"z co-ordinate = {self.z}")
        
V1 = three_d_Vector(5,4,8)
V1.getvalues()
        