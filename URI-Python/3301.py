h,z,l = map(int,input().split())

if (h > z and h > l):
   p1 = "huguinho"
   if (z > l):
      p2 = "zezinho"
   else:
      p2 = "luisinho"
elif(z > l):
   p1 = "zezinho"
   if (h > l):
      p2 = "huguinho"
   else:
      p2 = "luisinho"
else:
   p1 = "luisinho"
   if (h > z):
      p2 = "huguinho"
   else:
      p2 = "zezinho"

print(p2)