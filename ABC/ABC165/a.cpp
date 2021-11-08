#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)

using ll = long long;

int main(){
  int k,a,b;
  cin >> k;
  cin >> a >> b;

  bool ans=false;

  for(int i=a; i<=b; i++){
    if(i%k==0)ans=true;
  }
  cout << (ans ? "OK" : "NG") << endl;
}