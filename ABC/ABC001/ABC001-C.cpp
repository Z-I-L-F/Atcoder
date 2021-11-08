#include <iostream>
#include <string>
using namespace std;

string calcdir(int deg){
    string dir;
    int count=100;
    int start=1125;

    for(int i=0;i<16;i++){
        if(start<=deg*10 && deg*10<start+2250){
            count = i;
        }
        start+=2250;
    }
    //std::cout << count <<std::endl;
    if(count==0)return "NNE";
    else if(count==1)return "NE";
    else if(count==2)return "ENE";
    else if(count==3)return "E";
    else if(count==4)return "ESE";
    else if(count==5)return "SE";
    else if(count==6)return "SSE";
    else if(count==7)return "S";
    else if(count==8)return "SSW";
    else if(count==9)return "SW";
    else if(count==10)return "WSW";
    else if(count==11)return "W";
    else if(count==12)return "WNW";
    else if(count==13)return "NW";
    else if(count==14)return "NNW";
    else return "N";
}

double round(double d){
    d=d*10;
    d+=0.5;
    d=int(d);
    d=double(d/10);
    return d;
}

int calcpower(int dis){
    double p = dis;
    p/= 60;
    p=round(p);
    //std::cout << p <<std::endl;
    int pow;
    if(0<=p && p<=0.2)pow=0;
    else if(0.3<=p && p<=1.5)pow=1;
    else if(1.6<=p && p<=3.3)pow=2;
    else if(3.4<=p && p<=5.4)pow=3;
    else if(5.5<=p && p<=7.9)pow=4;
    else if(8.0<=p && p<=10.7)pow=5;
    else if(10.8<=p && p<=13.8)pow=6;
    else if(13.9<=p && p<=17.1)pow=7;
    else if(17.2<=p && p<=20.7)pow=8;
    else if(20.8<=p && p<=24.4)pow=9;
    else if(24.5<=p && p<=28.4)pow=10;
    else if(28.5<=p && p<=32.6)pow=11;
    else if(32.7<=p)pow=12;
    
    return pow;
}




int main(){
    int deg,dis;
    cin >> deg >> dis;

    string dir = calcdir(deg);
    int W = calcpower(dis);
    if(W==0)dir="C";

    std::cout << dir << " " << W << std::endl;
    return 0;
}