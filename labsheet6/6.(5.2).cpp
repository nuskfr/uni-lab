#include<iostream>
#include<math.h>
class pol{
    double r,a;
    public:
    pol(){}
    pol(double x, double y){
        r=x;
        a=y;
    }
    double rad(){
        return (r);
    }
    double ang(){
        return (a);
    }
};
class rec(){
    double x,y;
    public:
    rec(){
        x=0;
        y=0;
    }
    rec(pol a){
        x=(a.rad())*(cos(a.ang()));
        y=(a.rad())*(sin(a.ang()));
    }
    void display(){
        cout<<"\nx-coordinate="<<x;
        cout<<"\ny-coordinate"<<y;
    }
};
int main(){
    rec re;
    pol pl(10.0,0.785398);
    re=rec(pl);
    cout<<"\nRectangular co-ordinate is:\t";
    re.display();
}