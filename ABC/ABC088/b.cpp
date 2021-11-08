#include <bits/stdc++.h>
using namespace std;


int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  for(int i = 0; i < N; i++){cin >> a.at(i);}

  sort( a.begin() , a.end() );

  int ans =0;
  for (int i = 0; i < N; i++){
    if(i%2==0)ans += a[N-1-i];
    else ans -= a[N-1-i];
  }
  cout << ans << endl;
  //cout << a[0] << "/" <<a[N-1] << endl;
}