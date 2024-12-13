#include<iostream>
using namespace std;
class Base1{
    public:
     void greet(){
        cout<<"how are you?"<<endl;
     }
};
class Base2{
    public:
     void greet(){
        cout<<"kaise ho?"<<endl;
     }
};
class derived : public Base1,public Base2{
    int a;
    public:
    void greet(){
        Base2::greet();
    }
};
class B{
    public:
    void say(){
        cout<<"hello world"<<endl;
    }
};
class D{
    int a;
    //D,s new say() method will override base class's say() method
    public:
    void say(){
        cout<<"hello my beautiful world"<<endl;
    }
};
int main(){
    //ambiguity 1
    Base1 obj1;
    Base2 obj2;
    obj1.greet();
    obj2.greet();

    derived d;
    d.greet();


    B b;
    b.say();
    D e;
    e.say();
    return 0;
}