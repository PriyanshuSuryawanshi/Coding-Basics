class Programmer:
    company = "Microsoft"
    salary = 10000
    ID = 123
    def displaydata(self):
        print(f"Company = {self.company}")
        print(f"Salary = {self.salary}")
        print(f"ID = {self.ID}")
        
P1 = Programmer()
P1.ID = 321
P1.displaydata()       
    