print("enter the number")
n = int(input())
i = 1
a = 0
if n == 1:
    print("1 is either prime nor composite")
else:
    while i <= n:
        if n % i == 0:
            a = a + 1
        i = i + 1
    if a > 2:
        print(str(n) + "is composite")
    else:
        print(str(n) + "is prime")
