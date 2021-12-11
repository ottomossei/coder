N = int(input())
tn_1, xn_1, yn_1 = 0, 0, 0
ans = "Yes"
for n in range(N):
    tn, xn, yn = map(int, input().split())
    steps = tn - tn_1
    distance = abs(xn-xn_1) + abs(yn-yn_1)
    if ((distance-steps) % 2 !=0)or(distance-steps>0):
        ans = "No"
        break
    tn_1, xn_1, yn_1 =  tn, xn, yn
print(ans)