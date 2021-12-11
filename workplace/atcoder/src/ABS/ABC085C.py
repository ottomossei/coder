N, Y = map(int, input().split())

ans = "-1 -1 -1"

for n10 in range(N+1):
    for n5 in range(N+1-n10):
        n1 = N - n10 - n5
        if (n10*10000+n5*5000+n1*1000==Y):
            ans = str(n10) + " " + str(n5) + " " +str(n1)

print(ans)
