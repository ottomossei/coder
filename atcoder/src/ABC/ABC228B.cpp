#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int N, X;
    string ans;
    cin >> N >> X;
    vector<int> v(N);
    for(int n=0; n<N;n++){
        cin >> v[n];
    }
    set<int> myset;
    int bef = X;
    while(myset.find(bef) == myset.end()){
        myset.insert(bef);
        bef = v[bef-1];
    }
    cout << myset.size();
}