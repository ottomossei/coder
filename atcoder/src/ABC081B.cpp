#include<iostream>
using namespace std;
#include <string>
#include <bitset>
using std::bitset;

int main(){
    int n,a,b=0,c=0;
    cin>>n;
    /* ビットの比較aa */
    for(int i=0; i<n; i++){
        cin>>a;
        // a|bでビットのOR、下位ビット0が共通してどこまでか調べる
        b = a|b;
        // bitset<32> bit_a = a;
        // bitset<32> bit_b = b;
        // cout << "bit:a:  " << bit_a << endl;
        // cout << "bit:b:  " << bit_b << endl;
    }
    /* 下位n桁が連続して0 */
    // b&1 でb(2)の下位1桁が1ならTrue
    // !(b&1) なので、b(2)の下位1桁が0ならTrue
    while(!(b&1)){
        // cout << (b&1) << endl;
        c++;
        b/=2;
    }
    cout<<c;
}