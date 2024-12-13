#include<iostream>
using namespace std;
class base{
    protected:
    int a;
    private:
    int b;
};
class derived:protected base{             //only accissible in other classes or sub-classes

};
int main(){
    base b;
    derived d;
    // cout<<d.a;                         //can't accessible out side the class
    return 0;
}