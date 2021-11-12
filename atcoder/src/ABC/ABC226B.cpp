#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    // 被らないsetの作成
    set<vector<int>> s;
    for(int n=0; n<N;n++){
        int L;
        cin >> L;
        // 入力用の配列作成
        vector<int> a(L);
        for(int j=0;j<L;j++){
            cin >> a[j];
        }
        s.insert(a);        
    }
    cout << s.size();
}
