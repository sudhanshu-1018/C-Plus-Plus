#include<iostream>
using namespace std;
class complex;                  //forward declaration
class calculator{
    public:
        int add(int a,int b){
            return a+b;
        }
        int sumrealcomplex(complex ,complex );
        int sumcompcomplex(complex ,complex );   
};
class complex{
    int a,b;
    friend int calculator:: sumrealcomplex(complex ,complex );
    friend int calculator:: sumcompcomplex(complex ,complex );
public:
    void setnumber(int n1,int n2){
        a=n1;
        b=n2;
    }
    void printnumber(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int calculator::sumrealcomplex(complex o1,complex o2){
    return (o1.a+o2.a);
}
int calculator::sumcompcomplex(complex o1,complex o2){
    return (o1.b+o2.b);
}

int main(){
    complex o1,o2,o3;            //two function under complex
    calculator sum;            //one function under calculator
    o1.setnumber(1,4);
    o1.printnumber();
    o2.setnumber(5,4);
    o2.printnumber();

    int real=sum.sumrealcomplex(o1,o2);            //int real= int a
    cout<<"the number is "<<real<<endl;
    int comp=sum.sumcompcomplex(o1,o2);            //int comp= int b
    cout<<"the number is "<<comp<<endl;

    return 0;
}