#include<iostream>
using namespace std;
#include<math.h>
class wall{
    float l,v,b,h,V,N;
    float vol(){
        return(l*b*h);
    }
    public:
    float volume(){
        V=vol();
        return(V);
    }
    float c;
    void setdata(float a,float br,float c){
        l=a;
        b=br;
        h=c;
    }
    void setvol(float x){
        v=x;
    }
    float number(){
        V=volume();
        return(V/v);
    }
};
int main(){
    wall w;
    w.setdata(6,5,4);
    w.setvol(0.5);
    cout<<"The total number of bricks is:"<<w.number();
    cout<<endl;
    cout<<"The volume of the wall is:"<<w.volume();
}