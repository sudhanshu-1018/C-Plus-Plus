#include<iostream>
using namespace std;
class student{
    protected:
     int roll_no;
    public:
     void set_number(int a){
        roll_no=a;
     }
     void print_number(){
        cout<<"your roll number is "<<roll_no<<endl;
     }
};
class test:virtual public student{
    protected:
     float maths,physics;
    public:
     void set_marks(float m1,float m2){
        maths=m1;
        physics=m2;
     }
     void print_marks(){
        cout<<"the marks in math is:"<<maths<<endl;
        cout<<"the marks in physics is "<<physics<<endl;
     }
};
class sports:virtual public student{
    protected:
     float score;
    public:
     void set_score(float sc){
        score=sc;
     }
     void print_score(void){
        cout<<"your PT score is "<<score<<endl;
     }
};
class result:public test,public sports{
    private :
     float total;
    public:
     void display(){
        total=maths+physics+score;
        print_number();
        print_marks();
        print_score();
        cout<<"your total score is: "<<total<<endl;
        if (total>=180)
        {
            cout<<"pass";
        }
        else{
            cout<<"fail";
        }
     }
};
int main(){
    result harry;
    harry.set_number(420);
    harry.set_marks(98.0,89.5);
    harry.set_score(90);
    harry.display();
    return 0;
}