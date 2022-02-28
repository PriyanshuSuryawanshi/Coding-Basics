import pyautogui
import time

time.sleep(2)
with open("D:\\Coding\\Python\\Miniproject\\Whatsapp\\Random.txt") as f :
    pyautogui.typewrite(f.read())
    pyautogui.press("enter")
    

# number = input("Enter Number : ")
# i=0

# time.sleep(5)
# while i<=int(number) :
#     pyautogui.typewrite("Hii")
#     pyautogui.press("enter")
#     i+=1