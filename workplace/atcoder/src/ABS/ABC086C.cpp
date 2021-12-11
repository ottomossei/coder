#include<iostream>
#include<iostream>
using namespace std;
#include<cstdlib>

int main(){
    int N, steps, distance, t, x, y, t_1=0, x_1=0, y_1=0;
    cin >> N;
    string ans = "Yes";
    for(int n=1;n<N+1; n++){
        cin >> t >> x >> y;
        steps = t - t_1;
        distance = abs(x-x_1) + abs(y-y_1);
        if (((distance- steps)>0)||((distance-steps)%2!=0)){
            ans = "No";
            break;
        }
        t_1 = t;
        x_1 = x;
        y_1 = y;
    }
    cout << ans << endl;
}