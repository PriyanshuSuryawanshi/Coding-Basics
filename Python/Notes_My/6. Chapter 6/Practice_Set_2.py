m1 = int(input("Enter the marks in subject 1 "))
m2 = int(input("Enter the marks in subject 2 "))
m3 = int(input("Enter the marks in subject 3 "))
overall = (m1+m2+m3)/3

if(overall>40 and m1>33 and m2>33 and m3>33) :
    print("You Have Passed")
else:
    print("You Have Failed")