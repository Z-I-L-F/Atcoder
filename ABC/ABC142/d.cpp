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
���񐔂ŔC�ӂ�2�ɑ΂��Č݂��ɑf
���f��(��1)�݂̂̑g
���u�ő���񐔂̂����f���͂������邩�v
���ő���񐔂̑f�������q�͉���ނ�

�Ȃ�ƂȂ������������񂶂Ȃ̂͂킩�������ǎ����ł��ˁ`�`�`�`�`�`�`�`
AtCoder Beginner Cont
                    est 142
*/