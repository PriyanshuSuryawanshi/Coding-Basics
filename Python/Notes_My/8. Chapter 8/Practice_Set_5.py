def print_patttern(n):
    for i in range(n):
        print("* "*(n-i))

n = int(input("Enter The Number : "))
print_patttern(n)