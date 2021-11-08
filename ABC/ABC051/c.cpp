#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)

using ll = long long;

int main(){
  int sx,sy,tx,ty;
  cin >> sx >> sy >> tx >> ty;

  // 1往復目
  rep(i,tx-sx)cout << "R"; // x : (sx,sy)->(tx,sy)
  rep(i,ty-sy)cout << "U"; // y : (tx,sy)->(tx,ty)
  rep(i,tx-sx)cout << "L"; // x : (tx,ty)->(sx,ty)
  rep(i,ty-sy)cout << "D"; // y : (sx,ty)->(sx,sy)
  
  // 2往復目
  cout << "D"; // y : (sx,sy)->(sx,sy-1)
  rep(i,tx-sx+1)cout << "R"; // x : (sx,sy-1)->(tx+1,sy-1)
  rep(i,ty-sy+1)cout << "U"; // y : (tx+1,sy-1)->(tx+1,ty)
  cout << "L"; // x : (tx+1,ty)->(tx,ty)
  cout << "U"; // y : (tx,ty)->(tx,ty+1)
  rep(i,tx-sx+1)cout << "L"; // x : (tx,ty+1)->(sx-1,ty+1)
  rep(i,ty-sy+1)cout << "D"; // y : (sx-1,ty+1)->(sx-1,sy)
  cout << "R"; // x : (sx-1,sy)->(sx,sy)

  cout << endl;
}

/*
1回目の往復は最短距離で行けばいいので
  Rでx座標を合わせる(tx,sy)
  → Uでy座標を合わせる(tx,ty)
  → Lでx座標を合わせる(sx,ty)
  → Dでy座標を合わせる(sx,sy)
とすれば同じ座標を通らずに1往復は可能(sx<tx,sy<tyなので)

2回目はsx<tx,sy<tyであることに留意すると
  (sx,sy)→(sx,sy-1)→(tx+1,sy-1)→(tx+1,ty)→(tx,ty)
のように1マス外側を行くのが同じ座標を通らずにいける最短ルートな気がする(適当)
とりあえずこれで実装してみる。コーナーは今ちょっと思いつかないので。
*/