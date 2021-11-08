#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int plus=0,minus=0;
    
    if(c==a+b)plus=1;
    if(c==a-b)minus=1;
    
    if(plus+minus>=2)std::cout << "?" << std::endl;
    if(plus+minus<2){
        if(plus==1)std::cout << "+" << std::endl;
        else if(minus==1)std::cout << "-" << std::endl;
        else std::cout << "!" << std::endl;
    }
    return 0;
}