#include <bits/stdc++.h>
using namespace std;

int main(){
  string S,Gengou;
  cin >> S; // S = "yyyy/mm/dd"
  
  string yy,mm,dd;
  yy = S.substr(0,4);
  mm = S.substr(5,2);
  dd = S.substr(8,2);
  //cout <<yy<<"/"<<mm<<"/"<<dd<<endl;
  
  Gengou = "Heisei";
  

  bool nxt = false;
  if(mm[0]=='1')nxt = true;
  else if(mm[1]>'4')nxt = true;

  if(nxt)Gengou = "TBD";
  
  cout << Gengou << endl;
}