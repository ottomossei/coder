#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int N,bob=0,alice=0;
    cin >> N;
    int A[N-1];
    for(int i=0;i<=N-1;i++)cin >> A[i];
    // 標準ライブラリはクイックソート
    // 平均計算時間O(nlogn)、最悪計算時間O(n^2)
    // sort(int, int+intの大きさ)
    // greater<int>()で降順
    sort(A, A+N, greater<int>());
    for(int j=0;j<=N-1;j++){
        if(j%2==0){
            alice+=A[j];
        }else{
            bob+=A[j];
        }
    }
    cout << alice-bob;
}