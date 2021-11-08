#include <bits/stdc++.h>
using namespace std;

vector<int> tb_memo(10000000,-1);

int main(){
  int n;
  cin >> n;
  vector<string> S(n);
  vector<int> count(n,0);
  for(int i=0;i<n;i++)cin >> S.at(i);

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(S[i]==S[j])count[i]++;
    }
  }

  int max_i=0, max_c=0;
  for(int i=0;i<n;i++){
    if(max_c<=count[i]){
      max_i=i;
      max_c=count[i];
    }
  }

  cout << S[max_i] << endl;
}

/*
文字列の扱いがわからなくて(mapとか？)とか考えてみたけど解説読んだら普通に文字列全一致の全探索だった
*/