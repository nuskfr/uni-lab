#include<iostream>
using namespace std;
#include<math.h>
class wall{
    float l,v,b,h,V,N;
    float vol(){
        return(l*b*h);
    }
    float number(){
        V=vol();
        return(V/v);
    }
    public:
    float c;
    int setdata(float a,float br,float c){
        l=a;
        b=br;
        h=c;
    }
    int setvol(float x){
        v=x;
    }
    int setrate(float r){
        c=r;
    }
    float cost(){
        N=number();
        return(c*N);
    }
};
int main(){
    wall w;
    w.setdata(6,5,4);
    w.setvol(0.5);
    w.setrate(2.5);
    cout<<"The total cost is:"<<w.cost();
}