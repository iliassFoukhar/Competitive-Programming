t = int(input())
for i in range(t):
    n = int(input())
    a = [[] for i in range(n)]
    for j in range(n):
        a[j] = list(map(int, input().split()))
    ans = False
    for j in range(5):
        for k in range(5):
            if k != j:
                cnt1 = 0
                cnt2 = 0
                cntno = 0
                for z in range(n):
                    if a[z][j] == 1:
                        cnt1 += 1
                    if a[z][k] == 1:
                        cnt2 += 1
                    if a[z][j] == 0 and a[z][k] == 0:
                        cntno += 1
                if cnt1 >= n // 2 and cnt2 >= n // 2 and cntno == 0:
                    ans = True
    if ans:
        print('YES')
    else:
        print('NO')