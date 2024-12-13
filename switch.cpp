#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"tell me you age:"<<endl;
    cin>>age;
    switch (age){
    case 18:
        cout<<"your age is 18"<<endl;
        break;
    case 22:
        cout<<"you are 22"<<endl;
    case 2:
        cout<<"your age is 2"<<endl;

    default:
        cout<<"NO SPECIAL CASES"<<endl;
        break;
    }
    cout<<"Done with switch case"<<endl;
    return 0;
}