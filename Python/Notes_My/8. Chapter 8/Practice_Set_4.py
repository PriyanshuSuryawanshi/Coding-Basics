def summation(n):
    if (n==0):
        return 0
    else:
        ans = n + summation(n-1)
        return ans
    
n = int(input("Enter The Number : "))
print("Summation = "+str(summation(n)))