#include<iostream>
using namespace std;

int main(){
    int n,a,b=0,c=0;
    cin>>n;
    /* OR */
    for(int i=0; i<n; i++){
        cin>>a;
        b = a|b;
    }
    /* OR */
    while(!(b&1)){
        c++;
        b/=2;
    }
    cout<<c;
}