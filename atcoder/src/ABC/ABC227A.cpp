/*　自分の解答
O(n)
普通に足していく
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int N, K, A, ans;
    cin >> N >> K >> A;
    ans = A;
    for(int k=0;k!=K-1;k++){
        ans += 1;
        if (ans == N+1){
            ans = 1;
        }
    }
    cout << ans;
}

/* 別解
O(1)
(A+K-1)%N
もし余り0ならNに変換
*/

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, k, a; cin >> n >> k >> a;
//     int ans = (a + k - 1) % n;
//     if(ans == 0) ans = n;
//     cout << ans << endl;
// }