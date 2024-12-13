#include<iostream>
using namespace std;
class student{
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void student::set_roll_number(int r){
    roll_number=r;
}
void student::get_roll_number(){
    cout<<"your roll number is "<<roll_number<<endl;
}
class test:public student{
    protected:
    int maths;
    int physics;
    public:
    void set_marks(int,int);
    void get_marks(void);
};
void test::set_marks(int m1,int m2){
    maths=m1;
    physics=m2;
}
void test::get_marks(){
    cout<<"your marks in maths is "<<maths<<endl;
    cout<<"your marks in physics is "<<physics<<endl;
}
class result:public test{
    float percentage;
    public:
    void display_result(){
        get_roll_number();
        get_marks();
        cout<<"your result is "<<(maths+physics)/2<<"%"<<endl;
    }
};
int main(){
    result harry;
    harry.set_roll_number(420);
    harry.set_marks(94,90);
    harry.display_result();

    return 0;
}