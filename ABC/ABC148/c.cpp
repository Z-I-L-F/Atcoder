#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)

using ll = long long;

long long int calcGCD(long long int a, long long int b){
  return __gcd(a,b);
}

int main(){
  long long int A,B;
  cin >> A >> B;
  
  long long int ans;
  ans = A*B/calcGCD(A,B);

  cout << ans << endl;
}

/*

*/