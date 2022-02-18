f = open("for_q5.txt",'r')
text = f.read()
f = open("for_q5.txt",'w')
list = ['Donkey','animals','Lion','earth']
for i in range (4):
    text=text.replace(list[i],"******")
f.write(text)
f.close()