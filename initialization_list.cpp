#include<iostream>
using namespace std;
class test{
    int a;
    int b;
    public:
     test(int i,int j):a(i),b(j){
        cout<<"constructor executed "<<endl;
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
     }
};
    class test1{
    int a;
    int b;
    public:
     test1(int i,int j):a(i),b(2*j){
        cout<<"constructor executed "<<endl;
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
     }
};
    class test2{
    int a;
    int b;
    public:
     test2(int i,int j):a(i),b(i+j){
        cout<<"constructor executed "<<endl;
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
     }
};
    class test3{
    int a;
    int b;
    public:
     test3(int i,int j):a(i),b(a+j){
        cout<<"constructor executed "<<endl;
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
     }
};
    class test4{
    int a;
    int b;
    public:
     test4(int i,int j):b(j),a(i+b){                         //this will create problem because 'a' will be initialized first 
        cout<<"constructor executed "<<endl;
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
     }
};
int main(){
    test(4,5);    
    test1(4,5);    
    test2(4,5);    
    test3(4,5);    
    test4(4,5);    
    return 0;
}