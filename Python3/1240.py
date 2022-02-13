test = int(input())

def encaixa(A, B):
  i = len(B) - 1;
  j = len(A)- 1;
  while(i > -1):
    if(A[j]!= B[i]):
      return False
    i-=1
    j-=1
  return True
 
for i in range(test):
  A, B = map(str, input().split())
  if(len(A) >= len(B)):
    if(encaixa(A,B)):
      print("encaixa")
    else: 
      print("nao encaixa")
  else:
    print("nao encaixa")