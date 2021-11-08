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
Œö–ñ”‚Å”CˆÓ‚Ì2‚Â‚É‘Î‚µ‚ÄŒÝ‚¢‚É‘f
¨‘f”(‚Æ1)‚Ì‚Ý‚Ì‘g
¨uÅ‘åŒö–ñ”‚Ì‚¤‚¿‘f”‚Í‚¢‚­‚Â‚ ‚é‚©v
¨Å‘åŒö–ñ”‚Ì‘fˆö”ˆöŽq‚Í‰½Ží—Þ‚©

‚È‚ñ‚Æ‚È‚­‚±‚¤‚¢‚¤‚©‚ñ‚¶‚È‚Ì‚Í‚í‚©‚Á‚½‚¯‚ÇŽÀ‘•‚Å‚«‚Ë````````
AtCoder Beginner Cont
                    est 142
*/