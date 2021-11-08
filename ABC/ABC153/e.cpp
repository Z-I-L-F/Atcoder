#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define REP(i,a,b) for(int i=(int)(a); i<(int)(b); i++)
#define INF 1e9

using ll = long long;

int main(){
  int H,N;
  cin >> H >> N;
  vector< pair<int,int> > magic(N+1);
  rep(i,N){cin >> magic[i].first >> magic[i].second;}
  // first = damage , second = cost

  
  int max_damage = 0;
  // 1��̍U���ŗ^������ő啝(HP��0�����ɂ���΂���)
  rep(i,N){max_damage = max(max_damage, magic[i].first);}


  vector<int> min_MP(H+20000,INF);
  // HP��i���܂ł̍ŏ�����MP
  min_MP[0] = 0;
  for(int i=0;i<H+max_damage;i++){
    for(int j=0;j<N;j++){ // ���@�I��
      min_MP[i+magic[j].first]
        = min(min_MP[i + magic[j].first] // ����
          , min_MP[i] + magic[j].second ); // �����Ȃ�
    }
      //cout << min_MP[i] << endl;
  }


  int min_cost = INF;
  for(int i=0;i<max_damage+1;i++){
    min_cost = min(min_cost, min_MP[H+i]);
  }

  cout << min_cost << endl;
}

/*
DP�z��̕���10000����10���ɂ������L������h���{����E���Ă����R�[�i�[�P�[�X�Ⴊ�ʂ����c�c�c�Ȃ�ŁH�H�H
�����Z�̎��ɃI�[�o�[�����Ƃ��̔z�񕪂��m�ۂł���悤��damage(Ai)�ő�l=10000�̕����m�ۂ��Ă������̂Ɂc

�Ǝv�������f�o�b�O���Ă݂���킩����
����Hp��������̒��ߌv�Z���̂Ƃ��ɂ��ő�_���[�W�������N���邩�畝�͍ň��A�ő�l��2�{��2���B���Ă����K�v���������̂��`�`�`�I�I�I
*/