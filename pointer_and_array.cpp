#include<iostream>
using namespace std;

int main(){
    int marks[4]={3,5,9,2};
    int* p=marks;
    cout<<"the value of mark [0] is:"<<*p<<endl;
    cout<<"the value of mark [1] is:"<<*(p+1)<<endl;
    cout<<"the value of mark [2] is:"<<*(p+2)<<endl;
    cout<<"the value of mark [3] is:"<<*(p+3)<<endl;

    // cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    return 0;
}