#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
bool tt,dd,hh;
double t,d,h;
char c;
int main() {
    while(true) {
        cout<<setprecision(1)<<fixed;//格式化输出
        tt=dd=hh=true;
        cin>>c;
        if(c=='E') break;
        switch(c) {
        case 'T':tt=false;cin>>t;break;
        case 'D':dd=false;cin>>d;break;
        case 'H':hh=false;cin>>h;break;
        }
        cin>>c;
        switch(c) {
        case 'T':tt=false;cin>>t;break;
        case 'D':dd=false;cin>>d;break;
        case 'H':hh=false;cin>>h;break;
        }
        if(tt) t=h-0.5555*(6.11*exp(5417.7530*((1/273.16)-(1/(d+273.16))))-10.0);
        else if(dd) d=1/(1/273.16-log(((h-t)/0.5555+10)/6.11)/5417.7530)-273.16;
        else h=t+0.5555*(6.11*exp(5417.7530*((1/273.16)-(1/(d+273.16))))-10.0);
        cout<<"T "<<t<<" D "<<d<<" H "<<h<<endl;
    }



    return 0;
}
