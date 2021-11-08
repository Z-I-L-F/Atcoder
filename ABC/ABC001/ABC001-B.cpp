#include<iostream>
using namespace std;

int main(){
    int m,VV;
    cin >> m;

    if(m<100)std::cout << "00" <<std::endl;
    else if(m<1000)std::cout << "0" << (int)(m/100) <<std::endl;
    else if(m<=5000)std::cout << (int)(m/100) <<std::endl;
    else if(m<=30000)std::cout << (int)(m/1000+50) <<std::endl;
    else if(m<=70000)std::cout << (int)((m/1000-30)/5+80) <<std::endl; 
    else std::cout << 89 <<std::endl;
    
    return 0;
}


/*
int calcVV(int m){
    double a;
    a = m/1000;
    if(a<0.1)return 0;
    else if(0.1<=a||a<=5)return (int)(10*a);
    else if(6<=a||a<=30)return (int)(a+50);
    else if(35<=a||a<=70)return (int)((a-30)/5+80);
    else return 89;
}

int main(){
    int m,VV;
    cin >> m;
    std::cout << std::setw(2) << std::setfill('0') << calcVV(m) << std::endl;

    return 0;
}
*/