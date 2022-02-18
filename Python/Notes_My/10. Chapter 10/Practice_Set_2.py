class Calculator:
    
    def __init__(self,number):
        self.number = number
    def square(self):
        print(f"Square = {self.number **2}")
    def squareroot(self):
        print(f"Square Root = {self.number **0.5}")
    def cube(self):
        print(f"Cube = {self.number **3}")
        
num1 = Calculator(4);
num1.square()
num1.squareroot()
num1.cube()
