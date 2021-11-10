##　インポート
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

##　入力(固定)
cin >> N >> A >> B;

##  出力
cout << ans;

##　宣言
###　int(整数),string(文字),bool(真偽)
int myint;
string mystring;
bool mybool; //true, false
### 文字操作
mystring.size()
mystring.empty() //0,1
reverse(S.begin(), S.end()) //文字列左右反転
mystring.replace(n,m,X) //n番目(0,,n)からm文字（1,,m）をXに置換
mystring.substr(n,m) //0から数えてn番目からm番目を抽出


### int配列（myint[0],myint[1],myint[2]）
int myint[3];
###　セット
set<int> myset;
###　bit
bitset<32> mybit;

## vector宣言
std::vector<int> myvec;

## for文
for(int i=0; i<N; i++) 処理;
for(int i=0; i<N; i++){
    処理
}

## if文 int 0:偽、0以外:真
if((age >= 7)&&(age <= 11)){
    処理１
}else if((age == 0)||(age == 1)){
    処理２
}else{
    処理３
}

## ソート
### 配列A[0:N]を大きい順にクイックソート
sort(A, A+N, greater<int>());

## 演算子
余り　%
bitAND a|b

## 各桁の和
int digit_sum(int d){
    if(d<10) return d;
    return digit_sum(d/10) + d%10;
}