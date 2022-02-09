t = int(input())
for _ in range(t):
    n = int(input())
    a = [int(x) for x in input().split(' ')]
    d = [0 for i in range(102)]
    
    for x in a:
        if x < 0:
            d[-x] += 1
        else:
            d[x] += 1
    
    res = 0
    for y in range(102):
        if y > 0:
            res += min(2, d[y])
        elif y == 0:
            res += min(1, d[y])
    print(res)