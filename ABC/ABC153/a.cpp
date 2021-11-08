#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)

using ll = long long;

int main(){
  int H,A;
  cin >> H >> A;
  int ans=0;
  while(H>0){
    H -= A;
    ans++;
  }
  cout << ans << endl;
}