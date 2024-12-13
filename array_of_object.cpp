#include<iostream>
using namespace std;
class employee{
    int id;
    int salary;
public:
    void setid(void){
        salary=122;
        for (int i = 0; i < 10; i++)
        {
            
        cout<<i<<" enter the value of employee "<<endl;
        cin>>id;
        
        }
    }
    void getid(void){
        cout<<"the id of this employee is "<<id<<endl;
    }
};

int main(){
    // employee harry,rohan;
    // harry.setid();
    // harry.getid();
    employee fb[10];
    for (int i = 0; i < 10; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }
    
    return 0;
}