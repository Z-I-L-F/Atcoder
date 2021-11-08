#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)

using ll = long long;

int  kaibun(string s){
  int size = s.size();
  for(int i=0; i<=(size-1)/2; i++){
    if(s[i]!=s[size-i-1]){
      return false;
    }
  }
  return true;
}

int main(){
  string S;
  cin >> S;
  int N = S.size();

  bool All,L,R;
  All = kaibun(S);

  string SL,SR;
  SL = S.substr(0, ((N-1)/2));
  SR = S.substr((N+1)/2);
  L = kaibun(SL);
  R = kaibun(SR);

  bool tsuyoikaibun = All && L && R;

  //cout << SL << endl;
  //cout << R << endl;
  cout << ( tsuyoikaibun ? "Yes" : "No") << endl;
}