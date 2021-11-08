#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,x=0;
  cin >> N;

  int a=1;
  while (true){
    if(2*a>N)break;
    x++;
    a*=2;
  }

  cout << a << endl;
}