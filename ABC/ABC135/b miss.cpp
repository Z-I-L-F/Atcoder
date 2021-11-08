#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,cnt=0;
  cin >> N;
  vector<int> p(N);
  for (int i = 0; i < N; i++)cin>>p.at(i);

  bool sorted =false;
  while(!sorted){
    sorted = true;
    for(int i=0;i<N-2;i++){
      if(p[i]>p[i+1]){
        sorted = false;
        for (int j = 0; j < N; j++){
          if(p[j]<p[i+1]){
            swap(p[i],p[j]);
            cnt++;
          }
        }
      }
    }
  }
  cout << cnt;
  if(cnt<=1)cout << "YES" << endl;
  else cout << "NO" << endl;
}