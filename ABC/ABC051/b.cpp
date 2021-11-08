#include <bits/stdc++.h>
using namespace std;

int main(){
  int K,S,x,y,z;
  cin >> K >> S;

  int res=0;
  for(int x=0; x <= K; x++){
    for(int y=0; y <= K; y++){
      z = S-(x+y);
      if(z>=0 && z<=K)res++;
    }
  }
  
  cout << res << endl;
}