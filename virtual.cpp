#include<iostream>
using namespace std;
class baseclass{
    public:
     int var_base=1;
     virtual void display(){
        cout<<"1 displaying base class variables "<<var_base<<endl;
     }
};
class derivedclass:public baseclass{
    public:
     int var_derived=2;
     void display(){
        cout<<"2 displaying base class "<<var_base<<endl;
        cout<<"2 displaying derived class variable "<<var_derived<<endl;
     }
};
int main(){
    baseclass *base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;

    base_class_pointer=&obj_derived;
    base_class_pointer->display();//calling the function of base class through pointer to derived class object.
    //accessing the member of base class using pointer to base class 
    return 0;
}