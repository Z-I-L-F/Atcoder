#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N;
    cin >> N;
    vector<int> A(N),B(N,0);
    rep(i,N){cin >> A.at(i);}

    rep(i,N)B.at(A.at(i)-1) = i+1;
    
    rep(i,N)cout << B.at(i) << " ";
    cout << endl;
}

/*
    int order=0;
    while(order<N){
        rep(i,N){
            if(A.at(i)==order+1){
                B.at(order) = i+1;
                order++;
            }
        }
    }
*/