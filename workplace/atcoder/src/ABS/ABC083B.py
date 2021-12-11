N, A, B = map(int, input().split())
counter=0
for n in range(N+1):
    # 各桁の和
    s = sum([int(i) for i in str(n)])
    if (A<=s)and(B>=s):
        counter+=n
print(counter)