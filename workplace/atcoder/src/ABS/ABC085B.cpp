#include<iostream>
#include<set>
using namespace std;

int main(){
    int N;
    set<int> ans;
    cin >> N;
    int d[N-1];
    for(int i=0; i<N; i++)cin >> d[i];
    for(int i=0; i<N; i++)ans.insert(d[i]);
    cout << ans.size();
}