#include<iostream>
using namespace std;

int main()
{
    int A, B, C, X, ans=0, a, b, c;
    cin >> A >> B >> C >> X;
    // cout << A << endl;
    for(a=0;a<=A;a++){
        for(b=0;b<=B;b++){
            for(c=0;c<=C;c++){
                if(500*a+100*b+50*c==X){
                    ans++;
                }
            }
        }
    }
    cout << ans;
}