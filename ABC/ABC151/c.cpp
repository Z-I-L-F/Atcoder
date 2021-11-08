#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)

using ll = long long;

int main(){
  int N,M;
  cin >> N >> M;
  vector<int> p(N+1); // –â‘èn‚ğWA‚µ‚½‰ñ”‚ğŠi”[
  vector<bool> clear_checker(N+1,false); // –â‘èn‚ğ‚Ü‚¾ƒNƒŠƒA‚µ‚Ä‚È‚¢‚©‚Ç‚¤‚©
  
  int ans=0,pena=0;
  int p_n=0; //’ño‚µ‚½–â‘è
  string S;

  for(int i=0;i<M;i++){
    cin >> p_n >> S;

    if(S=="AC"){
      if(!clear_checker[p_n]){
        clear_checker[p_n]=true;
        ans++;
        pena += p[p_n];
      }

      else{
        continue;
      }
    }

    else if(S=="WA"){
      p[p_n]++;
    }

  }

  cout << ans << " " << pena << endl;
}