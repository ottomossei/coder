##  テンプレート
```cpp

#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
}

```

##  高速化
```cpp
//おまじない
//https://rsk0315.hatenablog.com/entry/2020/05/09/170315
cin.tie(nullptr);//cinとcoutの同期を切る
ios_base::sync_with_stdio(false);//iostreamとstdioの同期を切る
```

##  インポート
```cpp
#include<stdio.h>
#include<iostream>
#include<algorithm>
// 以上のを含め、標準ライブラリのプリコンパイル済のもの
#include<bits/stdc++.h>
using namespace std;
```

##  手法
- ～の個数を求めよ(制限が10^8以上)
    - [オーダー見積](https://github.com/ottomossei/coder/blob/main/atcoder/src/ABC/ABC227C.cpp)
- ～の最大値（最小値）を求めよ
    - [決め打ち二分探索](https://github.com/ottomossei/coder/blob/main/atcoder/src/ABC/ABC227D.cpp)


##  入力(固定)
```cpp
cin >> N >> A >> B;
```
##  出力
```cpp
cout << ans;
```
##  宣言
##  int(16bit整数),string(文字),double(小数,16桁)、bool(真偽)、long long（64bit整数）
```cpp
int myint; //2^31-1(±2*10^9)まで
long long mylong //2^63-1(±19*0^18)
string mystring;
double mydouble;
bool mybool; //true, false
```
##  文字操作
```cpp
mystring.size()
mystring.empty() //0,1
reverse(S.begin(), S.end()) //文字列左右反転
mystring.replace(n,m,X) //n番目(0,,n)からm文字（1,,m）をXに置換
mystring.substr(n,m) //0から数えてn番目からm番目を抽出
```

##  配列
```cpp
// int（myint[0],myint[1],myint[2]）
int myint[3];
// vector 大きさ3
vector<int> myvector(3); // 0,1,2番目の３つ
// vector 初期化で宣言
vector<int> myvector (3, 0); // 0,0,0のvector
// 2次元vector
vector<vector<int>> my2vector;
// 2次元vectorアクセス
myint  = my2vector[i][j];
// vector 要素追加
// 要素追加はメモリ量が足りない場合に確保するため、若干速度遅い
myvector.push_back(myint);
// set {1,2,3}
set<int> myset;
// set{vector<int>, vector<int>,,}
set<vector<int>> myset;
// set挿入
myset.insert(obj);
// set, vectorサイズ
myset.size();
// vector
```

##  bit
```cpp
bitset<32> mybit;
```

##  for文
```cpp
// 一般的なfor文
for(int i=0; i<N; i++) 処理;
for(int i=0; i<N; i++){
    // 処理
}

// 範囲for文(range-based for loop)
// 値保存のため、&（アドレス）による参照渡しに注意
// &を抜くと保存されない
for(long long &myll : myvector){ 
    // cin >> myll; //　myvector[i]に代入
}
// 以下と同じ挙動
for(long long myll=0; myll<myvector.size(); myll++){
    // cin >> myvector[myll];
}
```

## if文 int 0:偽、0以外:真
```cpp
if((age >= 7)&&(age <= 11)){
    処理１
}else if((age == 0)||(age == 1)){
    処理２
}else{
    処理３
}
```
## ソート
## 配列A[0:N]を大きい順にクイックソート
```cpp
sort(A, A+N, greater<int>());
```
## 演算子
余り　%
bitAND a|b

## 絶対値
```cpp
using namespace std;
#include<cstdlib>
#include<cmath>
int n = -3;
cout << abs(n) << endl; // 3
```

## 四捨五入
```cpp
//丸め誤差に注意する
double mydouble = 131.87;
ans = round(mydouble); //132
// もし第二位を四捨五入するなら、
ans = round(mydouble*10)/10; //131.9
// もし一の桁を四捨五入するなら、
ans = round(mydouble/10)*10; //130
```

## 各桁の和
```cpp
int digit_sum(int d){
    if(d<10) return d;
    return digit_sum(d/10) + d%10;
}
```