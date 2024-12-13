#include<iostream>
using namespace std;
int sum(int a,int b){
    cout<<"using function 2 argument"<<endl;
    return a+b;
}
int sum(int a,int b,int c){
    cout<<"using function 3 argument"<<endl;
    return a+b+c;
}



int volume(double r,int h){
    return (3.14*r*r*h);
}
int volume(int a){
    return (a*a*a);
}
int volume(int l,int b,int h){
    return (l*b*h);
}



int main(){
    cout<<"the sum of 3 and 5 is "<<sum(3,5)<<endl;
    cout<<"the sum of 3,7 and 5 is "<<sum(3,7,5)<<endl;
    cout<<"the volume of cylinder of radius 5 and height 10 is "<<volume(5,10)<<endl;
    cout<<"the volume of cube of side 5  is "<<volume(5)<<endl;
    cout<<"the volume of cuboid of length 5 , breadth 8 and height 10 is "<<volume(5,8,10)<<endl;
    return 0;
}