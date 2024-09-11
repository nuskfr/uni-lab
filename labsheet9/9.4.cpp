#include<iostream>
using namespace std;
class student{
    public:
    virtual void getdata()=0;
    virtual void show()=0
};
class engineering: public student{
    char name[2][20],faculty[3][20];
};