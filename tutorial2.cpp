#include<iostream>
using namespace std;
void sum(){
    int a;   
}

int glo=5;

int main(){
    int a=4;
    float b=5;
    int glo=9;
    glo=78;
    cout<<"this is the tutorial 4.Here the value of "<<a<<".The value of b is "<<b<<endl ;
    bool e=true;
    cout<<glo<<endl<<e<<endl;       //it takes local variable
    cout<<::glo<<endl;        //to call global variable in the function
    sum();
    return 0;
}
