#include<iostream>
using namespace std;

int main(){
    enum meal{breakfast,lunch,dinner};
    meal m1=lunch;             //enum is used to know the numbering
    cout<<m1<<endl;
    cout<<(m1==2)<<endl;     //false value of m1==1

    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    return 0;
}