#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st="Harry bhai";
    //opening files using constructor and writing it
    ofstream out("sample.txt");  //write operation
    out<<st;


    string st2;
    //opening files using constructor and reading it
    ifstream in("sample1.txt");   //reading operation
    in>>st2;
    getline(in,st2);
    getline(in,st2);
    getline(in,st2);
    cout<<st2;

    return 0;
}