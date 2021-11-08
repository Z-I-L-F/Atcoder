#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)

using ll = long long;

int main(){
  int L;
  cin >> L;

  double a = (double(L))/3; 

  double ans = a*a*a;

  //cout << ans << endl;
  printf("%.8f",ans);
}

/*
直感だと長さ/3した正6面体がさいだいっぽい
*/