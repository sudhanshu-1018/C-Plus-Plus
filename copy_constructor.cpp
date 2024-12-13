// 1--->Default Constructor (Number() {}): This constructor is called when an object of the Number class is created without any arguments.
//      It initializes the value of a to 0.
// 2-->Parameterized Constructor (Number(int num) {}): This constructor takes an integer argument (num) and assigns it to the member variable a.
#include<iostream>
using namespace std;
class number{
    int a;
    public:
      number(){
        a=0;
      }
      number(int num){
        a=num;
      }
      //when no copy constructor is found,compiler supplies its own copy constructor
      number(number &obj){
        cout<<"copy constructor called!!!"<<endl;
        a=obj.a;
      }
      void display(){
        cout<<"the number for this object is "<<a<<endl;
      }
};

int main(){
    number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();

    number z1(z);            //copy constructor invoked
    z1.display();
    //z1 should exactly resemble z or x or y
    number z3=z;             //copy constructor not called
    z3.display();

    z2=z;                   //copy constructor not called
    z2.display();
    return 0;
}