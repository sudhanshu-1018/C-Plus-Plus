#include<iostream>
using namespace std;
class CWH{
    protected:
     string title;
     float rating;
     public:
     void setData(string t, float r){
         title = t;
         rating = r;
     }
     virtual void display()=0; // Abstract method 
};
// Derived class
class CWHvideo :public CWH {
    float videolength;
    public:
    CWHvideo(string s,float r,float vl):CWH(s,r){
        videolength=vl;
    }
    void display(){
        cout<<"this is an amazing video with title "<<title<<endl;
        cout<<"Ratings:"<<rating<<"out of 5 stars ."<<endl;
        cout<<"Video length is "<<videolength<<"minutes."<<endl;
    }
};
class CWHtext:public CWH{
    int words;
    public:
    CWHtext(string s,float r,int wc):CWH(s,r){
        words=wc;
    }
    void display(){
        cout<<"this is an amazing video with title "<<title<<endl;
        cout<<"Ratings:"<<rating<<"out of 5 stars ."<<endl;
        cout<<"No. of words is "<<words<<"words."<<endl;
    }
};
int main(){
    string title;
    float rating,vlen;
    int words;
    
    //for code with harry video
    title="Django tutorial";
    vlen=4.56;
    rating=4.89;
    CWHvideo Djvideo(title,rating,vlen);

    //for code with harry text
    title="Django tutorial text";
    words=4.33;
    rating=4.19;
    CWHtext Djtext(title,rating,words);

    CWH* tuts[2];
    tuts[0]=&Djvideo;
    tuts[1]=&Djtext;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}