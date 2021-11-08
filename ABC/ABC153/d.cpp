#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)

using ll = long long;

int main(){
  long long int H,ans=0;
  cin >> H;
  long long int cnt = 1;
  while(H>0){
    H /= 2;
    ans += cnt;
    cnt *= 2;
  }

  cout << ans << endl;
}

/*
ex
HP = 5
¨ 5, 2+2, 1+1+1+1 ¨1+2+4 = 7‰ñ
HP = 12
¨ 12, 6+6, 3+3+3+3, 1+1 + 1+1 + 1+1 + 1+1 ¨ 1+2+4+8=15
32
¨ 32,16+16,8+8+8+8,4*8,2*16,1*32
2^n‰ñ‚ÅHP‚ª”{‚Ì‚à‚Ì‚ª“|‚¹‚é
*/