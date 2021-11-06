a = int(input())
arr = list(map(int, input().split()))
ans = int('inf')
for i in arr:
    ians = len(bin(i))-bin(i).rfind("1")-1
    if ians < ans:
        ans = ians
print(ans)