#include<iostream>
using namespace std;
//Base class
class Employee{
    public:
    int id;
    float salary;
    Employee(int inpID){
        id=inpID;
        salary=34.0;
    }
    Employee(){}                //Default constructor
};
//Derived class syntex
/*
class {{derived_class_name}}:{{visibility mode}} {{base_class_name}}
{
    class members/methods/etc...
}
*/
class programmer:public Employee                         //Derived class
{
    public:
    int languagecode=9; 
    programmer(int inpID){
        id=inpID;
        languagecode;
    }
    void getdata(){
        cout<<id<<endl;
    }    
};
int main(){
    Employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;

    programmer skillF(10);
    cout<<skillF.languagecode<<endl;
    cout<<skillF.id<<endl;
    skillF.getdata();
    return 0;
}