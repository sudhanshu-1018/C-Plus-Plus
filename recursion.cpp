#include<iostream>
using namespace std;
int factorial(int n){
    if (n<=1){
    return 1;
    }
    return n*factorial(n-1);
}
int fibonacci(int n){
    if (n<2){
        return 1;
    }
    return fibonacci(n-2)+fibonacci(n-1);
}

int main(){
    int a;
    cout<<"enter the number"<<endl;
    cin>>a;
    cout<<"the factorial of "<<a<<" is: "<<factorial(a)<<endl;
    cout<<"the fibonacci series of "<<a<<" is: "<<fibonacci(a);
    return 0;
}