m = int(input())
a= int(input())
b= int(input())
c = m - a - b

s = 0
if (a > b and a > c):
    s = a
elif (b > c):
    s = b
else:
    s = c
print(s)