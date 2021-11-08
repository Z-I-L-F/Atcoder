#include<iostream>
using namespace std;
int main()
{
    int A,B,max;
    cin >> A >> B;

    max = std::max( std::max(A+B,A-B) , A*B);
    std::cout << max << endl;
    return 0;
}