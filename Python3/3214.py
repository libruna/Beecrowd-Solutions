e,f,c = map(int,input().split())
v = e + f
b = 0
while(v/c >= 1):
      n  = int(v/c)
      b  = b + n
      v = int(v%c) + n

print(b)