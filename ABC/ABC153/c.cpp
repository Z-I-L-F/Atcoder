#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)

using ll = long long;

int main(){
  int N,K;
  cin >> N >> K;
  vector<long long int> H(N+1);
  rep(i,N){cin >> H[i];}

  sort(H.begin(),H.end());

  long long int atksum = 0;
  for(int i=0;i<N-K+1;i++){
    atksum += H[i];
  }
  cout << atksum << endl;
}