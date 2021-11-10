#  インポート
```cpp
#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
```

#  入力(固定)
```cpp
cin >> N >> A >> B;
```
#  出力
```cpp
cout << ans;
```
#  宣言
##  int(整数),string(文字),bool(真偽)
```cpp
int myint;
string mystring;
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
##  int配列（myint[0],myint[1],myint[2]）
```cpp
int myint[3];
```
##  セット
```cpp
set<int> myset;
```
##  bit
```cpp
bitset<32> mybit;
```

#  vector宣言
```cpp
std::vector<int> myvec;
```

#  for文
```cpp
for(int i=0; i<N; i++) 処理;
for(int i=0; i<N; i++){
    処理
}
```

# if文 int 0:偽、0以外:真
```cpp
if((age >= 7)&&(age <= 11)){
    処理１
}else if((age == 0)||(age == 1)){
    処理２
}else{
    処理３
}
```
# ソート
## 配列A[0:N]を大きい順にクイックソート
```cpp
sort(A, A+N, greater<int>());
```
# 演算子
余り　%
bitAND a|b

# 各桁の和
```cpp
int digit_sum(int d){
    if(d<10) return d;
    return digit_sum(d/10) + d%10;
}
```