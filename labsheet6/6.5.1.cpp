#include<iostream>
using namespace std;
class us{
    float x;
    public:
    void set(float a){
        x=a*(3.0/400);
    }
    void display(){
        cout<<x<<endl;
    }
};
class nep{
    float x;
    public:
    nep(){}
    nep(float b){
        x=b;
    }
    operator us(){
        us u1;
        u1.set(x);
        return u1;
    }
};
int main(){
    us u1;
    nep n1(4000);
    u1=n1;
    u1.display();
    return 0;
}