#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<string> s(N);
  for(int i=0;i<N;i++){
    cin >> s[i];
    sort(s[i].begin(),s[i].end()); //������
  }
  sort(s.begin(),s.end()); //������\�[�g(����������͘A�����ĕ���)

  long long int ans=0;
  int count = 1;
  string s_tmp = s[0];
  for(int i=1;i<N;i++){
    if(s_tmp == s[i])count++;
    else{
      if(count>1)ans += ((long)count*(long)(count-1)/2);
      count = 1;
      s_tmp = s[i];
    }
  }
  if(count>1)ans += ((long)count*(long)(count-1)/2);
  //�Ō�܂ōs�������̏���
  
  cout << ans << endl;

}

/*
�Q�l�ɂ��܂�����
https://atcoder.jp/contests/abc137/submissions/8077943
*/