/*
https://atcoder.jp/contests/abc227/tasks/abc227_d

制限がN<10^11
→オーダーを見積り、適切にforループを回す問題
a<b<c,a*b*c<=Nを満たすなら、
aの繰り返しはN^(1/3)、bは(N/A)^(1/2)、cは(N/(A*B))
ここでcのループ回数は以下の疑似コードから、

ans=0
for A=1 to pow(N,1/3)
	for B=A to pow(N/A,1/2)
		for C=B to N/(A*B)
			ans+=1
print(ans)

となり、(N/(A*B))-B+1と決定される。
*/

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    long long n, ans=0;
    cin >> n;
    for(long long a=1;a*a*a<=n;a++){
        for(long long b=a; a*b*b<=n;b++){
            ans+=n/a/b-b+1;
        }
    }
    cout << ans;
}