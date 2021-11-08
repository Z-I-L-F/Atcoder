#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)

using ll = long long;

float calc_d(double x1,double x2,double y1,double y2){
  double d2 = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
  return sqrt(d2);
}

int factorial(int n){
  if(n==0)return 1;
  return n*factorial(n-1);
}

int main(){
  int N;
  cin >> N;
  vector<double> x(N),y(N); 
  rep(i,N)cin >> x[i] >> y[i];

  double edge_sum=0.0;
  for(int a=0;a<N-1;a++)for(int b=a+1;b<N;b++){
    edge_sum += calc_d(x[a],x[b],y[a],y[b]);
    }
  
  int tsukau_kaisuu = 2 * factorial(N-1);

  double ans = edge_sum * double(tsukau_kaisuu) / double(factorial(N));

  //cout<<edge_sum<<","<<tsukau_kaisuu<<endl;
  //cout << ans << endl;
  printf("%.10lf\n",ans);
}

/*
解説放送がわかりやすかった
各辺が出てくる回数は全て同じで(対称性)、それをxとおくと
辺の長さの総和S
 = ありえる辺(2点の組)(NC2) * 各辺が何回使われるかx
 = 1回のルートで通る辺の数(N-1) * 通る順番(N!)
x = (N-1)N! / NC2
NC2 = N(N-1)/2より x = 2(N-1)!
xがわかれば各辺組の総和をx倍してSを求めればいいので
S = 各辺の長さの総和 * x
このSをルートの組数N!で割ると答え

*/