#include <bits/stdc++.h>
using namespace std;

vector<int> tb_memo(10000000,-1);

int triVoncci(long x){
  if(x<=2) return 0;
  else if(x==3) return 1;
  cout << x;
  int tb;
  if(tb_memo[x]!=-1)tb = tb_memo[x];
  else{
    tb = triVoncci(x-3) + triVoncci(x-2) + triVoncci(x-1);
    tb = tb % 10007;
    tb_memo[x]=tb;
    cout<<tb<<"/";
  }
  return tb;
}

int main(){
  long n;
  cin >> n;

  cout << triVoncci(n) << endl;
}