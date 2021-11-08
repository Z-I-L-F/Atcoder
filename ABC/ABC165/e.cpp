#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)

using ll = long long;

int main(){
  int N,M;
  cin >> N >> M;

  int a,b;
  a = 1;
  b = a+1;
  for(int i=0;i<M;i++){
    cout << a << " " << b << endl;
    a += i+1;
    b = a+i+1;
  }
}

/*
これ普通に真ん中の2つとってきてそれ以降は前者-1後者+1じゃいかんの？
と思ったのでとりあえず感で出してもる
→だめでしたｗそれはそうだわ

番号が全員でズレていくので2数字間の距離がすべて異なるようになっていればOKなんだが…
*/