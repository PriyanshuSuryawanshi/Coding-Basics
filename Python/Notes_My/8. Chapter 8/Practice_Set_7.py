def remove(c):
    list1.remove(c)
    
list1 = ["banana","mango","apple","kiwi","grapes"]
print("List : ")
for i in range(5):
    print(list1[i])

c = input("\nEnter the Fruit you want to remove : ")
remove(c)
print("\nUpdated List : ")
for i in range(4):
    print(list1[i])
