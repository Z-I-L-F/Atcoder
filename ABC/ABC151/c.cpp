#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)

using ll = long long;

int main(){
  int N,M;
  cin >> N >> M;
  vector<int> p(N+1); // ���n��WA�����񐔂��i�[
  vector<bool> clear_checker(N+1,false); // ���n���܂��N���A���ĂȂ����ǂ���
  
  int ans=0,pena=0;
  int p_n=0; //��o�������
  string S;

  for(int i=0;i<M;i++){
    cin >> p_n >> S;

    if(S=="AC"){
      if(!clear_checker[p_n]){
        clear_checker[p_n]=true;
        ans++;
        pena += p[p_n];
      }

      else{
        continue;
      }
    }

    else if(S=="WA"){
      p[p_n]++;
    }

  }

  cout << ans << " " << pena << endl;
}