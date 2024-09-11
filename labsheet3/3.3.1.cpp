#include<iostream>
using namespace std;
class sphere{
    float r;
    public:
    int set(float a){
        r=a;
    }
    float area(){
        return(4*3.14*r*r);
    }
};
int main(){
    sphere s;
    s.set(5);
    float ar=s.area();
    cout<<"The area of the sphere is:"<<ar;
}