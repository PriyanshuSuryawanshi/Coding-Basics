class animal():
    def __init__(self):
        print("Animal was created")
        
class pet(animal):
    def __init__(self):
        print("Pet was created")
        
class dog(pet):
    def __init__(self):
        print("Dog was created")
    def bark(self):
        print("Dog is barking")

dog1 = dog()
dog1.bark()
