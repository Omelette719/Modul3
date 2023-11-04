i = 1

while i <= 3:
    a1, a2 = map(int, input().split())
    
    if a1 > a2:
        print(a2, a1)
    else:
        print(a1, a2)
    
    i += 1
