// #include<iostream>
// using namespace std;

// struct employee
// {
//     int id;
//     char character;
//     float salary;

// };


// int main(){
//     struct employee rohan;
//     struct employee harry;

//     harry.id=1;
//     harry.character='c';
//     harry.salary=335237;

//     cout<<harry.id<<endl;
//     cout<<harry.character<<endl;
//     cout<<harry.salary<<endl;
    
//     return 0;
// }


#include<iostream>
using namespace std;

typedef struct employee{
  int id;
  char character;
  float salary;  
}ep;

union  money
{
    int rice;              //out of these 3 only use 1 at a time. 
    char car;              //better memory management
    float pounds;
};


int main(){
    ep harry;
    union money m1;
    // m1.car='d'
    m1.rice=34;
    cout<<m1.rice<<endl;
    cout<<m1.car;
   
    // cout<<m1.car;

    harry.id=1;
    harry.character='c';
    harry.salary=335237;

    cout<<harry.id<<endl;
    cout<<harry.character<<endl;
    cout<<harry.salary<<endl;
    return 0;
}