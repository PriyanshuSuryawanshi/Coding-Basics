with open("log.txt",'r') as f:
    text = f.read()
    
if 'python' in text.lower():
# I used .lower() so that the text is converted into lower text
# So that, while checking case doesn't cause any problem
    print("Yes,Its is present")
else :
    print("NO,Its not present")