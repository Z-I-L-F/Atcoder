#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main()
{
    int A,B;
    cin >> A >> B;

    cout << gcd(A,B) << endl;

}

/*
公約数で任意の2つに対して互いに素
→素数(と1)のみの組
→「最大公約数のうち素数はいくつあるか」
→最大公約数の素因数因子は何種類か

なんとなくこういうかんじなのはわかったけど実装できね〜〜〜〜〜〜〜〜
AtCoder Beginner Cont
                    est 142
*/