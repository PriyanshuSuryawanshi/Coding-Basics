
comment = input("Enter Your Comment : ")

# Method 1
# if(comment.find("Buy Now")!=-1 or comment.find("make a lot of money")!=-1 or comment.find("Subscribe this")!=-1 or comment.find("click this")!=-1) :
#     print("This is a Spam Comment")
# else :
#     print("Your Comment isn't Spam")

#Method 2 
if(("Buy Now") in comment or ("make a lot of money") in comment or ("Subscribe this") in comment or ("click this") in comment) :
    print("This is a Spam Comment")
else :
    print("Your Comment isn't Spam")