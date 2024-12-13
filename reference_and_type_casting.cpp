#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
    float x=34;
    float & y=x;    //'y' is another name of 'x'

    cout<<x<<endl;
    cout<<y<<endl;

    cout<<"the value of x is "<<(int)x<<endl;
    cout<<"the value of x is "<<int(x)<<endl;     //type casting convert float into intigers
    cout<<"the value of x is "<<(int)(x)<<endl;
    cout<<typeid(x).name()<<endl;
    return 0;
}