#include<iostream>
using namespace std;
int count=0;
class num{
    public:
    num(){
        count++;
        cout<<"this is the time when constructor called for object number "<<count<<endl;
    }
    ~num(){
        cout<<"this is the time when my destructor called for object number "<<count<<endl;
        count--;
    }
};

int main(){
    cout<<"we are inside our main funvtion"<<endl;
    cout<<"creating first object n1"<<endl;
    num n1;
    num n2;
    num n3;
    {cout<<"Entering this block "<<endl;
     cout<<"creating two or more object "<<endl;
     num n4,n5;
     cout<<"Exiting this block "<<endl;
     }
     cout<<"Back to main "<<endl;
    return 0;
}