#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
    complex(){
        real=0;
        img=0;
    }
    complex(int r,int i){
        real=r;
        img=i;
    }
    complex operator + (complex a){
        complex x;
        x.real=real+a.real;
        x.img=img+a.img;
        return (x);
    }
    void display(){
        if(img<0){
            cout<<real<<img<<"i";        
        } else {
            cout<<real<<"+i"<<img;
        }
    }
};
int main(){
    complex c1(4,5),c2(1,2),c3;
    c3=c1+c2;
    c3.display();
}