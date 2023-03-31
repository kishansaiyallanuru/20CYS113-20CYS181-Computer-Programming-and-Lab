def fact(a):
    prod = 1
    for i in range(a, t - 1, -1):
        prod = prod * i
    ans = prod
    
    return ans

# Main
print("Enter the number for which the factorial to be found ")
n = int(input())
factorial = fact(n)
print("Factorial of the given number is" + str(factorial))
