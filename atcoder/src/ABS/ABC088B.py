N = int(input())
A = list(map(int, input().split()))

# 大きい順
A = sorted(A,reverse=True)
bob=0
alice=0
for i, a in enumerate(A):
    if i%2 == 0:
        alice += a
    else:
        bob += a
print(alice-bob)