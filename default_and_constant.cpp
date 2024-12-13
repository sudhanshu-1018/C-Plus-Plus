#include<iostream>
using namespace std;
// float moneyreceive(int currentmoney,float factor){
    // return currentmoney*factor;
// }

// int main(){
//     int a,b;
//     int money=100000;
//     float fac=1.10;
//     cout<<"if you have Rs"<<money<<" in your bank account, you will receive Rs"<<moneyreceive(money,fac)<<"after 1 year"<<endl;
//     cout<<"FOR VIP: if you have Rs"<<money<<" in your bank account, you will receive Rs"<<moneyreceive(money,fac=1.15)<<"after 1 year"<<endl;

//     return 0;
// }
float moneyreceive(int currentmoney,float factor=1.04){
    return currentmoney*factor;
}

int main(){
    int a,b;
    int money=100000;
    cout<<"if you have Rs"<<money<<" in your bank account, you will receive Rs"<<moneyreceive(money)<<"after 1 year"<<endl;
    cout<<"FOR VIP: if you have Rs"<<money<<" in your bank account, you will receive Rs"<<moneyreceive(money,1.10)<<"after 1 year"<<endl;

    return 0;
}
   

// constant variable

// #include<iostream>
// using namespace std;
// int strlen(const char *P){

// }

// int main(){
    
//     return 0;
// }