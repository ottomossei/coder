#include<iostream>
using namespace std;

int main(){
    int a10=-1, a5=-1, a1=-1;
    int N, Y;
    cin >> N >> Y;
    for(int n10=0; n10<N+1; n10++){
        for(int n5=0; n5<N-n10+1; n5++){
            int n1 = N - n10 - n5;
            if(n10*10000+n5*5000+n1*1000==Y){
                a10 = n10;
                a5 = n5;
                a1 = n1;
            }
        }
    }
    cout << a10 << " " << a5 << " " << a1;
}