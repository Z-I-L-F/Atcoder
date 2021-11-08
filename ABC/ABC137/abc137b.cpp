#include<iostream>
using namespace std;
int main()
{
    int K,X;
    cin >> K >> X;

    for (int i = -(K-1); i < K; i++){
        std::cout << X+i << " ";
    }
    std::cout << endl;
    return 0;
}