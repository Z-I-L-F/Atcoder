#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<string> s(N);
  for(int i=0;i<N;i++){
    cin >> s[i];
    sort(s[i].begin(),s[i].end()); //文字順
  }
  sort(s.begin(),s.end()); //文字列ソート(同じ文字列は連続して並ぶ)

  long long int ans=0;
  int count = 1;
  string s_tmp = s[0];
  for(int i=1;i<N;i++){
    if(s_tmp == s[i])count++;
    else{
      if(count>1)ans += ((long)count*(long)(count-1)/2);
      count = 1;
      s_tmp = s[i];
    }
  }
  if(count>1)ans += ((long)count*(long)(count-1)/2);
  //最後まで行った時の処理
  
  cout << ans << endl;

}

/*
参考にしました→
https://atcoder.jp/contests/abc137/submissions/8077943
*/