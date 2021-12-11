// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_D#
/*
時系列データから最大差を求める
200,000回（2×10^5）
1. 網羅的 O(n^2)
1~n、1~n-1で全差分から求める
2. 今までの最小値（minv）を更新し、
   maxv, R[j]-minvを更新していく　O(n)
最小値がある時点で一意→ループを1回減らす
*/

#include<bits/stdc++.h>
using namespace std;

static const int MAX = 200000;

int main(){
    int R[MAX], n;

    cin >> n;
    for(int i=0; i<n; i++) cin >> R[i];

    int maxv = -2000000000;
    int minv = R[0];

    for (int i=0; i<n; i++){
        maxv = max(maxv, R[i] - minv);
        minv = min(minv, R[i]);
    }

    cout << maxv << endl;
}