#include<iostream>
using namespace std;
class A{
    protected:
    int a1;
};
class B:public virtual A{
    protected: int a2;
};
class C:public virtual A{
    protected: int a3;
};
class D:public B, public C{
    int a4;
    public:
    void input(){
        cout<<"ayy halo";
    }
};