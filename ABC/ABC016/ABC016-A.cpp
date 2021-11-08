#include<iostream>
using namespace std;

int main(){
    int M,D;
    cin >> M >> D;
    if(M%D==0)std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;
    return 0;
}