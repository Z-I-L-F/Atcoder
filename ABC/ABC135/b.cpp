#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,cnt=0;
  cin >> N;
  vector<int> p(N);
  for (int i = 0; i < N; i++)cin>>p.at(i);

  for (int i = 0; i < N; i++){
    if(p[i]!=i+1)cnt++;
  }
  

  //cout << cnt;
  if(cnt<=2)cout << "YES" << endl;
  else cout << "NO" << endl;
}

/*
解説読んで納得したけど数字が1~Nまでの順列なので一回の入れ替えで昇順になるのは2箇所違ってるときだけ
任意の数字の順列だと思って全探索ソートカウントするものだと思ってた。
問題文はちゃんと読もう！
*/