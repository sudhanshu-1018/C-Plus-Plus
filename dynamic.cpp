#include<iostream>
using namespace std;
class bankDeposite{
    int principal;
    int years;
    int interestRate;
    float returnValue;
    public:
        bankDeposite();
        bankDeposite(int p,int y,float r);
        bankDeposite(int p,int y,int r);
        void show();
};
bankDeposite :: bankDeposite(int p,int y,float r){
    principal=p;
    years=y;
    interestRate=r;
    returnValue=principal;
    for(int i=0;i<y;i++){
        returnValue=returnValue*(1+interestRate);
    }
}
bankDeposite :: bankDeposite(int p,int y,int r){
    principal=p;
    years=y;
    interestRate=float(r)/100;
    returnValue=principal;
    for(int i=0;i<y;i++){
        returnValue = returnValue * (1+interestRate);
    }
}
void bankDeposite ::show(){
    cout<<endl<<"principal amount was "<<principal<<".Return value after "<<years<< "years is "<<returnValue<<endl;
}

int main(){
    int p,y;
    float r;
    int R;

    cout<<"enter the value of p, y and r "<<endl;
    cin>>p>>y>>r;

    bankDeposite bd1= bankDeposite(p,y,r);
    bd1.show();

    cout<<"enter the value of p, y and r "<<endl;
    cin>>p>>y>>R;

    bankDeposite bd2= bankDeposite(p,y,R);
    bd2.show();

    
    return 0;
}