#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)


int main(){
  long long int x;
  cin >> x;
  long long int money=100;

  //bool flag=true;
  long long int y = 0;
  while(true){
    y++;
    money *= 1.01;
    if(money >= x)break;
  }


  cout << y << endl;
}