def soma_fatorial(m,n):
    soma1 = 0
    soma2 = 0
    if m == 0:
      soma1 = 1
    if m == 1:
      soma1 = 1
    if n == 0:
      soma2 = 1
    if n == 1:
      soma2 = 1
    if m > 1:
      for x in reversed(range(1, m)):
        m = m * x
        soma1 = m * x
    if n > 1:
      for y in reversed(range(1, n)):
        n = n * y
        soma2 = n * y
    total = soma1 + soma2
    return total
while True:
  try:
    m,n = map(int,input().split())
    
    print(soma_fatorial(m,n))
  except:
    
    break