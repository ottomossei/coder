a = int(input())
arr = list(map(int, input().split()))
ans = float('inf')
for i in arr:
    # bin()で2進数
    # rfind()で後方一致のインデックス取得
    # 桁数-下位から数えて1が始まる桁+1
    ians = len(bin(i))-bin(i).rfind("1")-1
    # 下位n桁までが共通して0を探したい
    # →最初はinfと比較し、少しずつ小さくしていく
    if ians < ans:
        ans = ians
print(ans)