#include<iostream>
using namespace std;

int main(){
    int a=3;
    int* b=&a;                               //int *b=&a;
    int** c=&b;
    cout<<"b----"<<b<<endl;
    cout<<"&a----"<<&a<<endl;
    cout<<"&b----"<<&b<<endl;
    cout<<"c----"<<c<<endl;
    cout<<"*c----"<<*c<<endl;

    cout<<"*b----"<<*b<<endl;  
    cout<<"**c----"<<**c<<endl;
    return 0;
}