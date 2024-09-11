#include<iostream>
#include<math.h>
using namespace std;
class shape{
    public:
    virtual float area(){}
    virtual float perimeter()=0;
    virtual void getdata()=0;
};
class rectangle:public shape{
    float l,b;
    public:
    void getdata(){
        cout<<"Length=";
        cin>>l;
        cout<<"Breadth=";
        cin>>b;
    }
    float area(){
        return(l*b);
    }
    float perimeter(){
        return (2*(l+b));
    }
};
class triangle:public shape{
    float a,b,c;
    public:
    void getdata(){
        cout<<"\nThe three sides of triangle are:";
        cin>>a>>b>>c;
    }
    float area(){
        float s,A;
        s=(a+b+c)/2.0;
        A=sqrt(s*(s-a)*(s-b)*(s-c));
        return (A);
    }
    float perimeter(){
        return (a+b+c);
    }
};
int main(){
    shape *ps;
    rectangle r;
    triangle t;
    ps=&r;
    ps->getdata();
    cout<<"\nArea of rectangle is"<<ps->area();
    cout<<"\nPerimeter of rectangle is"<<ps->perimeter();
    ps=&t;
    ps->getdata();
    cout<<"\nArea of triangle is"<<ps->area();
    cout<<"\nPerimeter of triangle is"<<ps->perimeter();
}