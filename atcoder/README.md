##  高速化
```cpp
//おまじない
//https://rsk0315.hatenablog.com/entry/2020/05/09/170315
cin.tie(nullptr);//cinとcoutの同期
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

##  入力(固定)
```cpp
cin >> N >> A >> B;
```
##  出力
```cpp
cout << ans;
```
##  宣言
##  int(整数),string(文字),double(小数,16桁)、bool(真偽)
```cpp
int myint;
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
// vector [1,2,3]
vevtor<int> myvector(3); // 0,1,2
// set {1,2,3}
set<int> myset;
// set{vector<int>, vector<int>,,}
set<vector<int>> myset;
// set挿入
myset.insert(obj);
// setサイズ
myset.size();
```

##  bit
```cpp
bitset<32> mybit;
```

##  bit
```cpp
bitset<32> mybit;
```

##  vector宣言
```cpp
std::vector<int> myvec;
```

##  for文
```cpp
for(int i=0; i<N; i++) 処理;
for(int i=0; i<N; i++){
    処理
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