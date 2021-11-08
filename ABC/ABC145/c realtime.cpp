#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)

using ll = long long;

float calc_d(double x1,double x2,double y1,double y2){
  double d2 = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
  return sqrt(d2);
}

int main(){
  int N;
  cin >> N;
  vector<double> x(N),y(N); 
  
  rep(i,N)cin >> x[i] >> y[i];

  double sum_d = 0;
  for(int a=0;a<N-1;a++){
    for(int b=a+1;b<N;b++){
      sum_d += calc_d(x[a],x[b],y[a],y[b]);
    }
  }

  cout << sum_d/N << endl;
}