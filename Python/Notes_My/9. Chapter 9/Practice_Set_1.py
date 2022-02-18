f = open('poems.txt')
text = f.read()
# print(text)
if 'twinkle' in text:
    print("Yes the word 'twinkle' is present")
else:
    print("No the word 'twinkle' is not present")
f.close()
# print("Done")