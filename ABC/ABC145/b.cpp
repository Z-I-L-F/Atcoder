#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)

using ll = long long;

int main(){
  int N;
  cin >> N;
  string S;
  cin >> S;

  bool ans = true;
  if(N%2)ans=false;
  rep(i,N/2){
    if(S[i] != S[i+(N/2)]){
      ans = false;
      break;
      }
  }
//  string T1 = S.substr(begin(),(N/2))
//  string T2 = S.substr(begin()+(N/2),(N/2))

  cout << ( ans ? "Yes" : "No" ) << endl;
}