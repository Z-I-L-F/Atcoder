#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)

using ll = long long;

int main(){
  long long int a,b,n;
  cin >> a >> b >> n;

  int maxv = 0;
  if(n<b){
    // n<=bってことは[x/b]=0こていなのでAxがクソでかいほうがいいのでは？
    /*long long int A,B;
    for(int i=1;i<=n;i++){
      A = int(a*i/b);
      B = int(i/b);
      maxv = max(maxv, int(A-B*a) );
    }*/
    double A;
    A = double(a*n/b);
    maxv = floor(A);
    cout << maxv << endl;
  }
  else{
    double A,B;
    long long int i = b-1;
      A = double(a*i/b);
      B = double(i/b);
      maxv = max(maxv, int(floor(A)-floor(B)*a) );
    
    cout << maxv << endl;
  }

}

/*
floor は x=nb+m とおくとnによらずmのみで決定する
またmが大きい時差が最大になる
*/