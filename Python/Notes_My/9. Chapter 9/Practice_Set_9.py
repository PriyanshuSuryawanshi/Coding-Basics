with open('this.txt') as f:
    text1 = f.read()
with open('this_copy.txt') as f:
    text2 = f.read()
if text1 == text2:
    print("Yes Both Files are identical")
else:
    print("NO Both Files are not identical")