def greatest(n1=0,n2=0,n3=0):
    if(n1>n2 and n1>n3):
        return n1
    elif(n2>n1 and n2>n3) :
        return n2
    elif(n3>n1 and n3>n2) :
        return n3
    else :
        print("Numbers Should be unique")
        
n1 = int(input("Enter The Value Of 1st Number : "))
n2 = int(input("Enter The Value Of 2nd Number : "))
n3 = int(input("Enter The Value Of 3rd Number : "))
max = greatest(n1,n2,n3)
print("Greatest Number is "+str(max))