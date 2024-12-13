#include<iostream>
using namespace std;
class shopitem{
    int id;
    float price;
    public:
     void setdata(int a,float b){
        id=a;
        price=b;
     }
     void getdata(){
        cout<<"code of this item is "<<id<<endl;
        cout<<"code of this item is "<<price<<endl;
     }
};

int main(){
    int size=3;
    shopitem *ptr=new shopitem[size];
    shopitem *ptrtemp=ptr;
    int p,i;
    float q;
    for(i=0;i<size;i++){
        cout<<"Enter ID and PRICE of time "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for ( i = 0; i < size; i++)
    {
        cout<<"item number:"<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    
    return 0;
}