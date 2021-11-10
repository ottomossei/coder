#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

string d4[4] = {"dream", "dreamer", "erase", "eraser"};

int main(){
    string S;
    cin >> S;

    // 前から解くと被るため、文字列反転
    reverse(S.begin(), S.end());
    // cout << S << endl;
    for(int i=0; i<4;i++) {
        reverse(d4[i].begin(), d4[i].end());
        // cout << d4[i]<<endl;
    }
    
    bool can1 = true;
    // cout << "-----" <<endl;
    // Sのi番目の文字でループ、""途中でbreakしたいので、あえてi++を書かない""
    for (int i=0; i<S.size();){
        bool can2 = false;
        // ４つの文字列ごとにループ
        for(int j=0; j<4; j++){
            string d = d4[j];
            // (S中のi番目からi+d.size()番目の文字)==(d)
            if (S.substr(i, d.size()) == d){
                // devide成功
                // cout << d <<endl;
                can2 = true;
                // Sのi番目をS+d.size()番目まで進める
                i += d.size();
            }
        }
        // 4回とも失敗なら×、ループ終了
        if(!can2){
            // cout << "out" << i <<endl;
            can1 = false;
            break;
        }
    }
    if (can1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}