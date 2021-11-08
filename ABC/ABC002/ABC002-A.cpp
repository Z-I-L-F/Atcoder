#include <iostream>
using namespace std;

int main(){
    int X,Y,out;
    cin >> X >> Y;
    if(X<=Y)out=Y;
    else if(X>=Y)out=X;
    std::cout << out << std::endl;
    return 0;
}