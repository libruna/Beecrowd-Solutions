n = int(input())
list = []

for x in range(n):
    list.append( input() )

for z in list:
    values = z.split()
    n2 = int(values[0])
    result = 0

    for y in range(n2):
        result = result + int(values[y + 1])
    
    result = result - (len(values) - 2)
    print(result)