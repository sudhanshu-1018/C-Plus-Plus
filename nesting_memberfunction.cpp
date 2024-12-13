#include<iostream>
using namespace std;
class binary{
    string s;
    public:
    void read();
    void chk_bin(void);
    void ones(void);
    void display(void);
};
void binary :: read(){
    cout<<"Enter the binary number"<<endl;
    cin>>s;
}
void binary::chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) !='0' && s.at(i) !='1'){                           //It checks whether the character at position i in the string s is not equal to '0' and is also not equal to '1'.
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
    
}
void binary:: ones(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
        
    }
}
void binary::display(void){
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        // cout<<s<<endl;
        // cout<<i<<endl;
        cout<<s.at(i);
    }
    cout<<endl;
}
    

int main(){
    binary b;
    b.read();
    b.chk_bin();
    b.ones();
    b.display();
    return 0;
}