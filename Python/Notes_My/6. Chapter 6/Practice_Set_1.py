a = int(input("Enter the First Number : "))
b = int(input("Enter the Second Number : "))
c = int(input("Enter the Third Number : "))
d = int(input("Enter the Fourth Number : "))

if (a>b and a>c and a>d) :
    print("a is the greatest number")
elif (b>a and b>c and b>d) :
    print("b is the greatest number")
elif (c>a and c>b and c>d) :
    print("c is the greatest number")
elif (d>a and d>b and d>c) :
    print("d is the greatest number")
else :
    print("Please enter Unique values")