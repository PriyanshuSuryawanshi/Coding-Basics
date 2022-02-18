text = True
i=1

with open("log.txt",'r') as f:
    
    while text:
        
        text = f.readline()
        if 'python' in text.lower():
            print(text)
            print(f"Yes,Its is present on line number {i}")
        i+=1