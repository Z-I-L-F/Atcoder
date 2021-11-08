#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N,K;
    cin >> N >> K;
    vector<int> h(N);
    rep(i,N){cin >> h.at(i);}

    int ans = 0;
    rep(i,N){if(h.at(i)>=K)ans++;}

    cout << ans << endl;
}