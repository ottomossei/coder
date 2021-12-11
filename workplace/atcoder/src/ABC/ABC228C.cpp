#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int N, K;
    cin >> N >> K;
    vector<int> myvector(N);
    for(int n=0; n<N;n++){
        int a, b, c;
        cin >> a >> b >> c;
        myvector[n] = a+b+c;
    }
    vector<int> cvec = {myvector.begin(), myvector.end()};
    sort(myvector.begin(),myvector.end(),greater<int>());
    for(int n=0; n<N;n++){
        if (cvec[n]+300 >= myvector[K-1]){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}