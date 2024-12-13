#include<iostream>
using namespace std;
#include<typeinfo>        //typeinfo is used to find type

int main(){
    float num1,num2;
    cout<<"Enter the value of num1:\n";
    cin>>num1;

    cout<<"Enter the value of num2:\n";
    cin>>num2;

    cout<<"The sum is:"<<num1 + num2<<endl;   
    cout<<"The sub is:"<<num1 - num2<<endl ;   
    cout<<"The product is:"<<num1 * num2<<endl;   
    cout<<"The division is:"<<num1 / num2<<endl<<endl;   

    cout<<"The value of a++ ---->:"<<num1++<<endl;   //print 7. and add 1 but not show
    cout<<"The value of a-- ---->:"<<num1--<<endl ;  //print 8. Because in above 1 add up and less from 1 but not show
    cout<<"The value of ++a ---->:"<<++num1<<endl;   //first add then show so, because 1 less in 8 but not print in above now its add 1 in 7 and print 8
    cout<<"The value of --a ---->:"<<--num1<<endl<<endl;   //first less then show. now 1 less in 8 and print 7

    cout<<"The value"<<((num1==num2)&&(num1<num2))<<endl;
    cout<<"The value"<<((num1==num2)||(num1<num2))<<endl;
    cout<<"The value"<<(!(num1==num2))<<endl<<endl;              //return opposite result

    cout<<"The size of 34.4 is "<<typeid(34.4).name()<<endl;
    cout<<"The size of 34.4 is "<<typeid(34.4f).name()<<endl;
    cout<<"The size of 34.4 is "<<typeid(34.4F).name()<<endl;  //not case sensitive
    cout<<"The size of 34.4 is "<<typeid(34.4l).name()<<endl;
    cout<<"The size of 34.4 is "<<typeid(34.4L).name()<<endl<<endl;

    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4F)<<endl;  //not case sensitive
    cout<<"The size of 34.4 is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4 is "<<sizeof(34.4L)<<endl;
    return 0;
}

