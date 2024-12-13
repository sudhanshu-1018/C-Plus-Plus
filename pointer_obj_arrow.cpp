#include<iostream>
using namespace std;
class complex{
    int real,imaginary;
    public:
     void get_data(){
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
     }
     void set_data(int a,int b){
        real=a;
        imaginary=b;
     }
};

int main(){
    complex *ptr=new complex;
    (*ptr).set_data(1,54);
    (*ptr).get_data();

    ptr->set_data(2,94);
    ptr->get_data();                               //array of object
    return 0;
}