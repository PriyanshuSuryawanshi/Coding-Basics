import random

def swg(USER,PC):
    print("Computer Chose : "+PC)
    if(USER==PC):
        print("Tie")
    elif(USER=='s' and PC=='w'):
        print("You Won!")
    elif(USER=='s' and PC=='g'):
        print("You Lose!")
    elif(USER=='w' and PC=='g'):
        print("You Won!")
    elif(USER=='w' and PC=='s'):
        print("You Lose!")
    elif(USER=='g' and PC=='s'):
        print("You Won!")
    elif(USER=='g' and PC=='w'):
        print("You Lose!")


randNo = random.randint(1,3)
if(randNo==1):
    PC = 's'
elif(randNo==2):
    PC = 'w'
else:
    PC = 'g'
USER = input("Select 's' for Snake,'w' for Water,'g' for Gun : ")
swg(USER,PC)
