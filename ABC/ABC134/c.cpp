#include <bits/stdc++.h>
using namespace std;
#define rep(i,N) for(int i=0;i<(int)(N);i++)

int main(){
  int N;
  cin >> N;
  vector<int> d(N);
  rep(i,N)cin >> d.at(i);

  sort(d.begin(),d.end());
  int K = d.at(N/2) - d.at(N/2-1);

  cout << K << endl;
}