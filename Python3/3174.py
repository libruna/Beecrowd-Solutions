bonecosH = 0
arquitetosH = 0
musicosH = 0
desenhistasH = 0

n = int(input())

for x in range(n):
  l1,l2,l3 = map(str,input().split())
  if l2 == "bonecos":
     bonecosH = bonecosH + int(l3)
  elif l2 == "arquitetos":
     arquitetosH = arquitetosH + int(l3)
  elif l2 == "musicos":
     musicosH = musicosH + int(l3)
  elif l2 == "desenhistas":
     desenhistasH = desenhistasH + int(l3)

bonecos = int(bonecosH/8)
arquitetos = int(arquitetosH/4)
musicos = int(musicosH/6)
desenhistas = int(desenhistasH/12)

print(bonecos + arquitetos + musicos + desenhistas)