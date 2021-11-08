#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)

using ll = long long;

int main(){
  int n;
  cin >> n;
  int ans=0;
  int l,r;

  rep(i,n){
    cin >> l >> r;
    ans += r-l+1;
  }

  cout << ans << endl;
}