#include<iostream>
using namespace std;
class time{
    int hour, minute,second;
    public:
    void set(int h, int m, int s){
        hour=h;
        minute=m; 
        second=s;
    }
    friend time operator + (time,time);
    void show(){
        cout<<"The addition of time in hh:ss:tt format is:\n";
        cout<<hour<<":"<<minute<<":"<<second;
    }
};
time operator + (time t1, time t2){
    time b;
        b.hour=t1.hour+t2.hour;
        b.minute=t1.minute+t2.minute;
        if(b.minute>60){
            b.minute=b.minute-60;
            b.hour=b.hour+1;
        }
        b.second=t1.second+t2.second;
        if (b.second>60){
            b.second=b.second-60;
            b.minute=b.minute+1;
        }
        return (b);
    }
int main(){
    time x,y,z;
    x.set(4,20,50);
    y.set(3,60,30);
    z=x+y;
    z.show();
    return 0;
}
