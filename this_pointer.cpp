#include<iostream>
using namespace std;
class A{
    int a;
    public:
     void setdata(int a){
        this ->a=a;
     }
     void getdata(){
        cout<<"the value of a is "<<a<<endl;
     }
};
class B{
    int b;
    public:
     B& setdata(int b){
        this->b=b;
        return *this;
     }
     void getdata(){
        cout<<"this value of b is "<<b<<endl;
     } 
};

int main(){
    A a;
    a.setdata(4);
    a.getdata();

    B b;
    b.setdata(5).getdata();
    return 0;
}