#include<iostream>
using namespace std;

int digit_sum(int d){
    // 10以下ならそのまま返す
    if(d<10) return d;
    // 10以上なら10で割った余りが下1桁の値になる
    // それを足して、元の数値を割って再度計算
    return digit_sum(d/10) + d%10;
}

int main(){
    int N, A, B, n, s=0, counter=0;
    cin >> N >> A >> B;
    for(n=1;n<=N;n++){
        s = digit_sum(n);
        if((A<=s)&&(B>=s)){
            counter+=n;
        }
    }
    cout << counter;
}