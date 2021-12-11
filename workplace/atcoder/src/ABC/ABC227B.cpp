/*　自分の解答
O(143*143+n)=O(20449+n)=Max(O(10^5))
aとbの最大値からSの網羅計算
一致を確認
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int N, ans=0, I=143;
    vector<int> myvector(30000,10);
    for(int a=1;a<I+1;a++){
        for(int b=1;b<I+1;b++){
            myvector.push_back(4*a*b + 3*a + 3*b);
        }
    }
    cin >> N;
    for(int n=0; n<N;n++){
        int s;
        cin >> s;
        if(*find(myvector.begin(), myvector.end(), s) != s){
            ans+=1;
        }
    }
    cout << ans;

}


/*　模範解答
O(1000*1000*n)=O(1000000n)=Max(O(10^7))
Sが最大1000なので、a,bも最大値は1000であるとして
Sを網羅計算
それをn回計算
※オーダーはギリギリ
*/

// #include<stdio.h>
 
// int main(){
// 	int n;
// 	int s[99];
// 	scanf("%d",&n);
// 	for(int i=0;i<n;i++)scanf("%d",s+i);
// 	int ans=0;
// 	for(int i=0;i<n;i++){
// 		int flag=0;
// 		for(int a=1;a<=1000;a++)for(int b=1;b<=1000;b++){
// 			if(4*a*b+3*a+3*b==s[i])flag=1;
// 		}
// 		if(flag==0)ans++;
// 	}
// 	printf("%d\n",ans);
// }