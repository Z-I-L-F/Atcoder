#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)

int main(){
  int c[4][4];
  rep(i,3)rep(j,3)cin >> c[i+1][j+1];

  bool flag = true;
  int a2_a1 = c[2][1] - c[1][1];
  if(a2_a1 == c[2][2]-c[1][2] && a2_a1 == c[2][3]-c[1][3]);
  else flag = false;
  
  

  cout << (flag ? "Yes" : "No") << endl;
}