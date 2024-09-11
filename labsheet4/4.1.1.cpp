#include<iostream>
using namespace std;
class dob{
    int year, month, day;
    public:
    void set(int y,int m,int d){
        year=y;
        month=m;
        day=d;
    }
    void subtract(dob a){
        dob b;
        b.day=a.day-day;
        if(b.day<0){
            b.day=b.day+30;
            b.month=b.month-1;
        }
        b.month=a.month-month;
        if(b.month<0){
            b.month=b.month+12;
            b.year=b.year-1;
        }
        b.year=a.year-year;
        return (b);
    }
    void show(){
        cout<<"The current age of person in yy:mm::dd format is \n";
        cout<<year<<":"<<month<<":"<<day;
    }
};
int main(){
    dob x,y,z;
        x.set(2024,7,16);
        y.set(2005,11,26);
        z=x.subtract(y);
        z.show();
}