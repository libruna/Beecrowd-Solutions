n = int(input())
cars = 0
dolls = 0
for x in range(n):
    name, gender = map(str,input().split())
    if gender == "F":
       dolls = dolls + 1
    elif gender == "M":
       cars = cars + 1
print(cars, "carrinhos")
print(dolls, "bonecas")