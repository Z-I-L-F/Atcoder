#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A;
    cin >> A;

    int x=0;
    if (A%2==1)x=1;
    float p;
    p = float((A+x)/2)/float(A);
    cout << p << endl;
}