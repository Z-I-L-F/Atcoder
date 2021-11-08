#include <bits/stdc++.h>
using namespace std;

vector<int> tb_memo(10000000,-1);

int main(){
  int n;
  cin >> n;

  int tb;
  tb_memo[1]=0;
  tb_memo[2]=0;
  tb_memo[3]=1;

  for(int x=0;x<=n;x++){
    if(x<=3)tb = tb_memo[x];
    else{
      tb = tb_memo[x-3] + tb_memo[x-2] + tb_memo[x-1];
      tb = tb % 10007;
      tb_memo[x]=tb;
      //cout << tb << "/";
    }
  }

  cout << tb_memo[n] << endl;
}