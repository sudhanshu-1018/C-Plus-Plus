#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a=34;
    char b='c';

    cout<<"the value of a was: "<<a<<endl;
    cout<<"the value of b was: "<<b<<endl<<endl;
    a=45;
    b='4';                                                //here we can change value
    cout<<"the value of a is: "<<a<<endl;
    cout<<"the value of b is: "<<b<<endl;

    cout<<"the value of a is:"<<setw(4)<<a<<endl;
    cout<<"the value of a is:"<<setw(6)<<b<<endl;
    return 0;
}




int main(){
    const int a=34;                                 
    const char b='c';                                        //here we can not change value because we use constants

    cout<<"the value of a was: "<<a<<endl;
    cout<<"the value of b was: "<<b<<endl<<endl;
    // a=45;
    // b='4';                                                
    cout<<"the value of a is: "<<a<<endl;
    cout<<"the value of b is: "<<b<<endl;
    return 0;
}

// operator precedence
int main(){
    int a=3,b=4;
    int c =(((a*5)+b)-(45+87));
    cout<<c;
    return 0;
}