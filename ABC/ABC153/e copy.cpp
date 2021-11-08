#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)
#define INF 1e9

using ll = long long;

int main(){
  int H,N;
  cin >> H >> N;
  vector<int> A(N+1),B(N+1);
  rep(i,N){cin >> A[i] >> B[i];}
  // first = damage , second = cost

  
  int max_damage = 0;
  // 1‰ñ‚ÌUŒ‚‚Å—^‚¦‚ç‚ê‚éÅ‘å•(HP‚ğ0–¢–‚É‚·‚ê‚Î‚¢‚¢)
  rep(i,N){max_damage = max(max_damage, A[i]);}


  vector<int> min_MP(H+10000,INF);
  // HP‚ğií‚é‚Ü‚Å‚ÌÅ¬Á”ïMP
  min_MP[0] = 0;
  for(int i=0;i<H+max_damage+1;i++){
    for(int j=0;j<N;j++){ // –‚–@‘I‘ğ
      min_MP[i+A[j]]
        = min(min_MP[i + A[j]] // Œ‚‚Â
          , min_MP[i] + B[j] ); // Œ‚‚½‚È‚¢
    }
      //cout << min_MP[i] << endl;
      //cout << i << endl;
  }


  int min_cost = INF;
  for(int i=0;i<max_damage+1;i++){
    min_cost = min(min_cost, min_MP[H+i]);
  }

  cout << min_cost << endl;
}