#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)

using ll = long long;

long long int pick2Ball(long long int a){
  return a*(a-1)/2;
}

int main(){
  int n;
  cin >> n;
  vector<int> A(n+1);
  rep(i,n)cin >> A[i];

  int max_num = 0;
  rep(i,n){max_num =  max(max_num,A[i]);}
  max_num+=2;
  vector<int> basket(max_num,0);

  rep(i,n){
    basket[A[i]]++;
  }

  long long int  all_pattern = 0;
  for(int i=0;i<max_num;i++){
    all_pattern += pick2Ball(basket[i]);
  }

  long long ans = 0;
  for(int i=0;i<n;i++){
    ans = all_pattern - pick2Ball(basket[A[i]]) + pick2Ball(basket[A[i]]-1);
    cout << ans << endl;
  }
  
}