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
    complex operator - (){
        complex a;
        a.real=-real;
        a.img=-img;
        return (a);
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
    complex v(4,5),a;
    a=-v;
    a.display();
}