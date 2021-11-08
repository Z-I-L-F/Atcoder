#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)

using ll = long long;

int main(){
  int N,K,M;
  cin >> N >> K >> M;
  int A=0;
  int ans = M*N;
  rep(i,N-1){
    cin >> A;
    ans -= A;
  }
  if(ans<=0)ans=0;
  else if(ans>K)ans=-1;

  cout << ans << endl;
}