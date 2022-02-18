import random

randNo = random.randint(1,100)

guess = False
count = 1

user = int(input(("Enter a Number : ")))

while guess==False:
    
    if user>randNo:
        user = int(input("Guess a smaller Number : "))
        count +=1
    elif user<randNo :
        user = int(input("Guess a Greater Number : "))
        count +=1
    elif user == randNo :
        print("Yes its the right Number")
        print(f"You guessed the right number in {count} attempts")
        guess = True
        