#include<iostream>
using namespace std;
class shop{
    int itemID[100];
    int itemPRICE[100];
    int counter;
public:
    void initcounter(void){counter=0;}
    void setPRICE(void);
    void setdisplayPRICE(void);
};
void shop::setPRICE(void){
    cout<<"Enter ID of your item no."<<counter +1<<endl;
    cin>>itemID[counter];
    cout<<"Enter PRICE"<<endl;
    cin>>itemPRICE[counter];
    counter++;
}
void shop ::setdisplayPRICE(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"the price of item with ID "<<itemID[i]<<" is "<<itemPRICE[i]<<endl;
    }
    
}

int main(){
    shop dukaan;
    dukaan.initcounter();
    for (int i = 0; i < 10; i++)
    {
        dukaan.setPRICE();
    }
    
    // dukaan.setPRICE();
    // dukaan.setPRICE();
    // dukaan.setPRICE();
    dukaan.setdisplayPRICE();
    return 0;
}