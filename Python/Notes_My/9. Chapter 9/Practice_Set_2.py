def game():
    return 45
S = str(game())
print("Your Score is "+S)

with open("Highscore.txt") as f:
    HS = f.read()

if HS=='' or int(HS)<int(S):
    print("New Highscore has been made")
    f = open("Highscore.txt","w")
    f.write(S)
    f.close()
    
with open("Highscore.txt") as f:
    HS = f.read()

print("Your HighScore is "+HS)