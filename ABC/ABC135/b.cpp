#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,cnt=0;
  cin >> N;
  vector<int> p(N);
  for (int i = 0; i < N; i++)cin>>p.at(i);

  for (int i = 0; i < N; i++){
    if(p[i]!=i+1)cnt++;
  }
  

  //cout << cnt;
  if(cnt<=2)cout << "YES" << endl;
  else cout << "NO" << endl;
}

/*
����ǂ�Ŕ[���������ǐ�����1~N�܂ł̏���Ȃ̂ň��̓���ւ��ŏ����ɂȂ�̂�2�ӏ�����Ă�Ƃ�����
�C�ӂ̐����̏��񂾂Ǝv���đS�T���\�[�g�J�E���g������̂��Ǝv���Ă��B
��蕶�͂����Ɠǂ����I
*/