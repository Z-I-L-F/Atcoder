#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,count=0,flag=0;

  
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++){cin >> A.at(i);}

  while (flag == 0){
    for (int i = 0; i < N; i++){
      if( (A[i])%2 !=0){
        flag = 1;
        break;
      }
      A[i] /= 2;
      
    }
    if(flag!=1)count++;
  }
  cout << count << endl;
}