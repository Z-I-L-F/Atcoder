#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)
#define INF 1e9

using ll = long long;

int main(){
  int H,N;
  cin >> H >> N;
  vector< pair<int,int> > magic(N+1);
  rep(i,N){cin >> magic[i].first >> magic[i].second;}
  // first = damage , second = cost

  
  int max_damage = 0;
  // 1回の攻撃で与えられる最大幅(HPを0未満にすればいい)
  rep(i,N){max_damage = max(max_damage, magic[i].first);}


  vector<int> min_MP(H+20000,INF);
  // HPをi削るまでの最小消費MP
  min_MP[0] = 0;
  for(int i=0;i<H+max_damage;i++){
    for(int j=0;j<N;j++){ // 魔法選択
      min_MP[i+magic[j].first]
        = min(min_MP[i + magic[j].first] // 撃つ
          , min_MP[i] + magic[j].second ); // 撃たない
    }
      //cout << min_MP[i] << endl;
  }


  int min_cost = INF;
  for(int i=0;i<max_damage+1;i++){
    min_cost = min(min_cost, min_MP[H+i]);
  }

  cout << min_cost << endl;
}

/*
DP配列の幅を10000から10万にくっそ広げたらドロボから拾ってきたコーナーケース例が通った………なんで？？？
足し算の時にオーバーしたときの配列分も確保できるようにdamage(Ai)最大値=10000の幅も確保しておいたのに…

と思ったがデバッグしてみたらわかった
これHp超えた後の超過計算時のときにも最大ダメージ超えが起きるから幅は最悪、最大値の2倍の2万撮っておく必要があったのか～～～！！！
*/