#include<iostream>
using namespace std;
class student{
    protected:
    int maths,physics,chemistry,social_science;
    void print_student_name(){
        cout<<"name - sudhanshu kumar singh"<<endl;
        cout<<"roll no. - 01"<<endl;
        cout<<"class - IX -'a'"<<endl;
    }
    
};
class formula:public student{
    protected:
    int total=500;
    float obtain;
    float per;
    void percentage(){
        obtain=maths+physics+chemistry+social_science;
        per=obtain/5;
        cout<<"total marks="<<total<<endl;
        cout<<"obtained marks="<<obtain<<endl;
        cout<<"percentage="<<per<<"%"<<endl;
        if (obtain>=250)
        {
            cout<<endl<<"RESULT ----> pass"<<endl;
        }
        else{
            cout<<"RESULT -----> fail"<<endl;
        }
    }
};
class detail:public formula{
    protected:
    string a;
    int r;
    string p;

    void sudhanshu(){
        maths=54.0;
        physics=89.0;
        chemistry=79.0;
        social_science=81.0;
    }
    public:
    void show_sudhanshu(){
        cout<<"enter the name of student:"<<endl;
        cin>>a;
        cout<<"enter roll number:"<<endl;
        cin>>r;
        cout<<"password:"<<endl;
        cin>>p;
        while (true)
        {
            if ((a=="sudhanshu" )&&(r==1))
            {       
                if (p=="su123")
                {    
                    cout<<endl;
                    sudhanshu();
                    print_student_name();cout<<endl;
                    cout<<"maths:"<<maths<<endl;
                    cout<<"physics:"<<physics<<endl;
                    cout<<"chemistry:"<<chemistry<<endl;
                    cout<<"social_science:"<<social_science<<endl;
                    cout<<endl;
                    percentage();
                }
                else{
                    cout<<"wrong password"<<endl;
                }
                break;
                
            }
            else{
                cout<<"wrong user name or roll number"<<endl;
                break;
            }
        }
    }
    

    
};


int main(){
    detail s;
    s.show_sudhanshu();
    return 0;
}