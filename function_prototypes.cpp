#include<iostream>
using namespace std;

int sum(int,int);
void g();

int main(){
    int num1,num2;
    cout<<"enter the first number"<<endl;
    cin>>num1;
    cout<<"enter the second number"<<endl;
    cin>>num2;
    //num1 and num2 are actual parameters
    cout<<"the sum is:"<<sum(num1,num2);
    g();
    return 0;
}
int sum(int a,int b){
    //Formal parameters a and b will be taking values from Actual parameters(num1,num2)
    int c=a+b;
    return c;
}
void g(){
    cout<<"\nHello,good morning";
}