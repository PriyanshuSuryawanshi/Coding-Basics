class ComplexNo:
    def __init__(self,real,imaginary) :
        self.real = real
        self.imaginary = imaginary
    def __add__(self,c):
        return ComplexNo(self.real+c.real,self.imaginary+c.imaginary)
    def __mul__(self,c):
        mulreal = self.real*c.real - self.imaginary*c.imaginary
        mulimaginary = self.real*c.imaginary + self.imaginary*c.real    
        return ComplexNo(mulreal,mulimaginary)
    def __str__(self) -> str:
        return f"{self.real} + {self.imaginary}i"
        
c1 = ComplexNo(1,4)
c2 = ComplexNo(4,2)
print(c1+c2) 
print(c1*c2)