#include <iostream>
using namespace std;
class employee
{
    private:
        int a, b, c;

    public:
        int d, e;
        void setData(int a1, int b1, int c1); 
        // a1,a2,a3 is number given by us later
        // void setData(int a1,int b1,int c1){
        //     a=a1;
        //     b=b1;
        //     c=c1;
        // }

        void getData(){
            cout << "The value of a is " << a << endl;
            cout << "The value of b is " << b << endl;
            cout << "The value of c is " << c << endl;
            cout << "The value of d is " << d << endl;
            cout << "The value of e is " << e << endl;
        }
                                                                       //both are same void getData() and  void getData(void)
        // void getData(void){
        //     cout<<"The value of a is "<<a<<endl;
        //     cout<<"The value of b is "<<b<<endl;
        //     cout<<"The value of c is "<<c<<endl;
        //     cout<<"The value of d is "<<d<<endl;
        //     cout<<"The value of e is "<<e<<endl;
        // }
};

void employee :: setData(int a1, int b1, int c1){
        a = a1;
        b = b1;
        c = c1;
    }


int main()
{
    employee sudhanshu;
    // sudhanshu.a=134                    //throw an error because (a) is private
    sudhanshu.d = 34;
    sudhanshu.e = 89;
    sudhanshu.setData(1, 2, 4);
    sudhanshu.getData();
    return 0;
}