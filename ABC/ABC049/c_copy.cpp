#include <bits/stdc++.h>
using namespace std;
string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
    string S;
    cin >> S;

    // ��납����������ɂ��ׂĂ̕�������u���E���]�v����
    reverse(S.begin(), S.end());
    for (int i = 0; i < 4; ++i) reverse(divide[i].begin(), divide[i].end());

    // �[����؂��Ă���
    bool can = true;
    for (int i = 0; i < S.size();) {
        bool can2 = false; // 4 �̕����񂽂��ǂꂩ�� divide �ł��邩
        for (int j = 0; j < 4; ++j) {
            string d = divide[j];
            if (S.substr(i, d.size()) == d) { // d �� divide �ł��邩
                can2 = true;
                i += d.size(); // divide �ł����� i ��i�߂�
            }
        }
        if (!can2) { // divide �ł��Ȃ�������
            can = false;
            break;
        }
    }

    if (can) cout << "YES" << endl;
    else cout << "NO" << endl;
}