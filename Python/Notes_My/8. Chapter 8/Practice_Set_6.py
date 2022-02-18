def centimeter(inch) :
    cm = 2.54*inch
    return cm

inch = int(input("Enter the length in Inches : "))
print("It is "+str(centimeter(inch))+" cm")
