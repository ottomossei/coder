/*
▼問題
https://atcoder.jp/contests/abc227/tasks/abc227_d
K個の異なる部署から1人ずつ取って
K人のPTを作る。最大いくつ作れる？
1 <= K <= N <= 2*10^5
1 <= Ai <= 10^12
▼入力
N K
A1~Ai～An

▼
例
3 3
2 3 4

▼解説
https://zenn.dev/fjnkt98/articles/5bef9f4cf2af60
n=1から列挙して法則性を考えるのは時間がかかる
→答えを仮定して、それが満たされるか検証する
・決め打ち二分探索
「○○という条件を満たす X の最小値（最大値）を求めよ」
⇔「ある値 X が与えられたとき、○○を満たすことはできるか？」
⇔YesとNoの境界を探す

・Pを仮定(Pmd)して、Pmd以上のPTができる条件を考える
　⇔【重要】Pmdは大きい値と考えて、探索する
（１）まず各Aiにおいて、sum=Σmin(Ai,Pmd)
（２）Pmd×K>sumはあり得ない⇔Pmd*K<=sumとなる時の境界を探す

*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio;
    int N, K;
    cin >> N >> K;
    vector<long long> A(N);
    for(long long &a : A){
        cin >> a;
    }
    // Pを決め打ち二分探索
    long long ok = 0;
    // 演算はP*K>=sum
    // →P>sum/K、すなわちPの取り得る値は(10^12)(2*10^5)/K
    long long ng = 1e18/K;
    while(ng - ok > 1){
        // cout << "ok : " << ok << endl;
        // cout << "ng : " << ng << endl;
        // 半分に割る、Pmdが決め打ちされたP
        long long Pmd = (ok + ng) / 2;
        // cout << "Pmd : " << Pmd << endl;
        // 合計値計算
        long long sum = 0;
        for(long long a : A){
            sum += min(a,Pmd);
        }
        if(sum>=Pmd*K){
            ok = Pmd;
        // sum が小さい時、最大が左へシフト
        }else{
            ng = Pmd;
        }
        // cout << "sum : " << sum << endl;
        // cout << "-------------" << endl;
    }
    cout << ok << endl;
}