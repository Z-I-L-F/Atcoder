#include <bits/stdc++.h>
using namespace std;

int main(){
  string S,T;
  cin >> S;

  string divide[4] = {"dream", "dreamer", "erase", "eraser"};
  
  reverse(S.begin(),S.end());
  for (int i = 0; i < 4; i++){reverse( divide[i].begin(),divide[i].end() );}

  bool can = true;
  /*
  for (int i = 0; i < S.size(); i++){
  ��Ȃ�i++�ɂ�������1���ԔY��
  */
  for(int i=0; i < S.size();){
    bool can2 = false;
    for (int j = 0; j < 4; j++){
      string d = divide[j];
      if(S.substr(i, d.size()) == d){
        can2 = true;
        i += d.size();
        //cout<<d<<"|"<<can2<<endl;
      }
    }
    if(!can2){
      can=false;
      break;
    }
  }
  
  if(can) cout << "YES" << endl;
  else cout << "NO" << endl;

}

/*
�ނ����̂œ��������܂���
�v������

��substr�֐� str.substr(start,longs) �Ŏg�p
������str�̓�start�����ڂ���longs�̒�����������������擾����B
*/