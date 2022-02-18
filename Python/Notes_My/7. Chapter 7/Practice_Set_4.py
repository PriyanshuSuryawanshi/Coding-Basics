n = int(input("Enter the Number : "))
prime = True

for i in range(2,n):
    if(n%i == 0 and n!=2):
        prime = False
        break
    else:
        prime = True
        
if prime :
    print("Yes,it is a Prime Number")
else:
    print("No,it is not a Prime Number")