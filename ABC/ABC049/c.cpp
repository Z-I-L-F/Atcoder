#include <bits/stdc++.h>
using namespace std;

int main(){
  string S,T;
  cin >> S;

  string divide[4] = {"dream", "dreamer", "erase", "eraser"};
  
  reverse(S.begin(),S.end());
  for (int i = 0; i < 4; i++){reverse( divide[i].begin(),divide[i].end() );}

  bool can = true;
  /*
  for (int i = 0; i < S.size(); i++){
  手癖でi++にした結果1時間悩んだ
  */
  for(int i=0; i < S.size();){
    bool can2 = false;
    for (int j = 0; j < 4; j++){
      string d = divide[j];
      if(S.substr(i, d.size()) == d){
        can2 = true;
        i += d.size();
        //cout<<d<<"|"<<can2<<endl;
      }
    }
    if(!can2){
      can=false;
      break;
    }
  }
  
  if(can) cout << "YES" << endl;
  else cout << "NO" << endl;

}

/*
むずいので答えを見ました
思いつかん

☆substr関数 str.substr(start,longs) で使用
文字列strの内start文字目からlongsの長さ分だけ文字列を取得する。
*/