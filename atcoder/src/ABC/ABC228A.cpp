#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int S, T, X;
    string ans;
    cin >> S >> T >> X;
    if ((X>=S)&&(X<T)){
        ans = "Yes";
    }else if (T<S){
        if(T==0){
            T = 24;
        }
        if((X<T)||(S<=X)){
            ans = "Yes";
        }else{
            ans = "No";
        }
    }else{
        ans = "No";
    }
    cout << ans <<endl;
}