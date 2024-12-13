#include<iostream>
using namespace std;

int main(){
    int marks[4]={2,4,7,8};
    int mathmarks[4];
    mathmarks[0]=22;
    mathmarks[1]=25;
    mathmarks[2]=28;
    mathmarks[3]=30;

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    marks[2]=3;
    cout<<marks[2]<<endl;

    for (int i=0;i<4;i++){
    cout<<i<<"------"<<marks[i]<<endl;
    }
    return 0;
}