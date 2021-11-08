#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)

using ll = long long;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i,N)cin >> A[i];

  double inv_sum=0;
  rep(i,N)inv_sum += 1/(double(A[i]));

  double ans = 1/inv_sum;

  cout << fixed << setprecision(10) << ans << endl;
}