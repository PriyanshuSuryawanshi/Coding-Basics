import pyautogui as pt 
import time

limit = input("Enter the Limit : ")
msg = input("Enter the MSG : ")
i = 0 

time.sleep(5)

while i<int(limit) :
    # pt.typewrite((str)(i+1)+". "+msg)
    pt.typewrite(msg)
    pt.press("enter")
    
    i+=1

