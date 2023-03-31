def sum(n):
    if n == 1:
        sum = 1
    else:
        sum = float(n * (n + 1)) / 2
    
    return sum

# Main
n = int(input())
sum = sum(n)
print(sum)
