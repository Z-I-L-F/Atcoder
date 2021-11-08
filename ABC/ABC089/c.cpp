#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
using ll = long long;

int fac(int n){
  if(n==0)return 1;
  else return n * fac(n-1);
}


int main(){
  int N;
  cin >> N;
  string ss;
  vector<string> S(N);
  //rep(i,N)cin >> S[i];

  char march[5] = {'M','A','R','C','H'};
  int march_num[10]={0};
  // M,A,R,C,H = 1,2,3,4,5
  rep(i,N){
    cin >> ss;
    rep(j,5){
      if(ss[0] == march[j])march_num[j]++;
    }
  }

  long long int ans = 0;
  long long int plus = 0;
  for(int a=0;a<3;a++){
    for(int b=a+1;b<4;b++){
      for(int c=b+1;c<5;c++){
        plus = ll(march_num[a]) * ll(march_num[b]) * ll(march_num[c]);
        //cout << plus << endl;
        ans += plus;
      }
    }
  }

  cout << ans << endl;
}

/*

  // �����܂܂�镶�����nC3���ĕ����̑I�����{����΂����͂��c
  long long int ans = 0;
  if(count>=3) ans = fac(count) / (fac(count-3)*fac(3));
  rep(i,5){
    if(march_num[i]!=0)ans *= march_num[i];
  }

  �� ���߂ł���(���������������g���������{�ɂȂ�Ȃ��Ƃ���)

  ����ǂ�
  �� �ܕ�������3�������̂͑S�T���\���������Ɂ`�`�`�`�`


  �Ȃ񂩂��߂�����
  �� �v�Z�r����int���Ƃ��߂Ȃ̂��`�`�`�`
  �����Ƃ������e�X�g�P�[�X�f�[�^��Ԃ�����Ŕ��o����
  ���ʂ�longlongint��march�i�[���錾���Ă����ׂ�������
*/