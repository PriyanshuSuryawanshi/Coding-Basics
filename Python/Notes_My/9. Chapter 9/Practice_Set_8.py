with open('this.txt') as f:
    text = f.read()
with open('this_copy.txt','w') as f:
    f.write(text)