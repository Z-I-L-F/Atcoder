#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)

using ll = long long;

int main(){
  int h,w,k;
  cin >> h >> w >> k;

  vector<string> S(h);
  rep(i,h)cin>>S[i];



  cout << S[2] << endl;
}

/*
はじめてE問題まで来たけど全然思いつかね～～
単純に1回の切断で白(1)の隣接を多く断ち切れるような切断線がいいのかと思ったけど(切断後に)ブロック内にある白の個数をどうやって判定するかが思いつかない
*/