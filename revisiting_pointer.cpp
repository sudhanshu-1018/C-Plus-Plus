#include<iostream>
using namespace std;

int main(){
    int a=4;
    int *ptr=&a;
    cout<<"the value of p is "<<*(ptr)<<endl;

    //new keyword
    float *p=new float(40.78);
    cout<<"the value of p is "<<*(p)<<endl;

    int *arr =new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    *(arr+3)=40;
    *(arr+4)=50;
    *(arr+4+1)=60;
    delete[]arr;
    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    cout<<"the value of arr[2] is "<<arr[2]<<endl;
    cout<<"the value of arr[3] is "<<arr[3]<<endl;
    cout<<"the value of arr[4] is "<<arr[4]<<endl;
    cout<<"the value of arr[5] is "<<arr[5]<<endl;


    // int* array = new int[10];
    // delete[] array;                              //exemple of deleting array object
    
    // int* ptr = nullptr;
    // delete ptr;                                   //example of deleting null pointer

    return 0;
}