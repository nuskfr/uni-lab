#include<iostream>
#include<math.h>
using namespace std;
class sphere{
    float v;
    public:
    float set(float a){
        v=a;
    }
    float r(){
        return(cbrt((v*3)/(4*3.14)));
    }
};
int main(){
    sphere s;
    s.set(27+82);
    float rd=s.r();
    cout<<"The diameter of the sphere is:"<<rd*2;
}