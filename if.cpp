#include<iostream>
using namespace std;

int main(){
    int age;
    while (true){
    cout<<"Tell me you age:"<<endl;
    cin>>age;
    if ((age<18)&&(age>0)){
        cout<<"YOu are not eligible for coming in the party"<<endl;
    }
    else if (age==18){
        cout<<"You need special party pass for entry"<<endl;
    }
    else if(age<=0){
        cout<<"You are not born yet"<<endl;
    }
    else {
        cout<<"You are eligible for the party and you don't need any type of pass.So come and lets rock"<<endl;
    }
    }
    return 0;
}