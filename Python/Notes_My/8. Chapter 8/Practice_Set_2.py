def convert(celcius=0):
    return celcius*1.8+32

celcius = int(input("Enter the Temperature in Celcius : "))
print("Temperature in Fahrenheit is : "+str(convert(celcius)))