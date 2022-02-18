class Employee:
    salary = 1000
    increment = 100
    
    @property
    def salaryAfterIncrement(self):
        return (self.salary + self.increment)
        
    @salaryAfterIncrement.setter
    def salaryAfterIncrement(self,sai):
        self.increment = sai-self.salary

e1 = Employee()
print(e1.increment)
print(e1.salaryAfterIncrement)
e1.salaryAfterIncrement = 2500
print(e1.increment)