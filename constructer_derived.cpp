#include<iostream>
using namespace std;
class Base1{
    int data1;
    public:
     Base1(int i){
        data1=i;
        cout<<"Base1 class constructor called "<<endl;
     }
     void print_dataBase1(){
        cout<<"the value of data1 is "<<data1<<endl;
     }
};
class Base2{
    int data2;
    public:
     Base2(int i){
        data2=i;
        cout<<"Base2 class constructor called "<<endl;
     }
     void print_dataBase2(){
        cout<<"the value of data2 is "<<data2<<endl;
     }
};
class derived:public Base2,public Base1{
    int derived1,derived2;
    public:
     derived(int a,int b,int c,int d):Base2(b),Base1(a){
        derived1=c;
        derived2=d;
        cout<<"derived class constructor called "<<endl;
     }
     void print_DataDerived(){
        cout<<"the value of derived1 is "<<derived1<<endl;
        cout<<"the value of derived2 is "<<derived2<<endl;
     }
};
int main(){
    derived harry(1,2,3,4);
    harry.print_dataBase1();
    harry.print_dataBase2();
    return 0;
}