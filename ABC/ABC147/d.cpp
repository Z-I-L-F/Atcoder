#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)

using ll = long long;
long long int mod_n = 1e9 + 7;


int main(){
  long long int x,y;
  cin >> x >> y;

  vector<vector<int>> dp(x+4,vector<int>(y+4, 0));
  //rep(i,x+4)rep(j,y+4)dp[i][j]=0;
  dp[x][y] =-1;

  dp[0][0] = 1;
  dp[1][2] = 1;
  dp[2][1] = 1;
  dp[3][3] = 2;
  int a=0,b=0,i=3;
  if((x+y)%3==0){
    while(dp[x][y]==-1){
      i += 3;
      for(int a=2;a<=i-2;a++){
        b = i-a;
        dp[a][b] = ( dp[a-1][b-2] + dp[a-2][b-1] ) % mod_n;
        //if(dp[a][b])cout << dp[a][b] << a << b << endl;
      }
    //rintf("a");
    }
  }

  cout << dp[x][y] << endl;
}

/*
  dp[0][0] = 1;
  dp[1][2] = 1;
  dp[2][1] = 1;
  dp[3][3] = 2;
  int a=0,b=0;
  for(int i=3;i<x+y+4;i+=3){
    for(int a=2;a<=i-2;a++){
      b = i-a;
      dp[a][b] = ( dp[a-1][b-2] + dp[a-2][b-1] ) % mod_n;
      if(dp[a][b])cout << dp[a][b] << a << b << endl;
    }
  }
  */

