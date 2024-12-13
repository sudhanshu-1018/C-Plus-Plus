#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
        complex (void);                             //constructor declaration (default----takes no parameters)
        complex(int ,int );                        //constructor declaration  ( parameterized-----takes parameters)

        void printnumber(){
            cout<<"yournumber is "<<a<<" + "<<b<<"i"<<endl;
        }
};
complex::complex(void){                  //this is s default constructor as it takes no parameters
    a=10;
    b=23;
}
complex::complex(int x,int y){           //this is a parameterized constructor as it takes parameters
    a=x;
    b=y;
}

int main(){
    
    complex a(4,6);         //implicit call
    complex b=complex(8,9); //explicit call
    a.printnumber();                             //parameterized
    b.printnumber();

    complex c1,c2,c3;
    c1.printnumber();
    c2.printnumber();                            //default
    c3.printnumber();
    return 0;
}