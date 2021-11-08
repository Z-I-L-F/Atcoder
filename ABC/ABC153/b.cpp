#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)

using ll = long long;

int main(){
  int H,N;
  cin >> H >> N;
  vector<int> A(N+1);
  rep(i,N){cin >> A[i];}
  
  int atksum = accumulate(A.begin(), A.end(), 0);

  cout << (atksum>=H ? "Yes" : "No") << endl;
}