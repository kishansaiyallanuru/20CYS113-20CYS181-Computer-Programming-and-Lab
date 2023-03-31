print("Please enter the value of n")
n = int(input())
i = 0
x = 1
print(i)
print(x)
s = 0
j = 3
while j <= n:
    s = x + i
    print(s)
    i = x
    x = s
    j = j + 1
