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
    void add(time a, time b){
        hour=a.hour+b.hour;
        minute=a.minute+b.minute;
        if(minute>60){
            minute=minute-60;
            hour=hour+1;
        }
        second=a.second+b.second;
        if (second>60){
            second=second-60;
            minute=minute+1;
        }
    }
    void show(){
        cout<<"The addition of time in hh:ss:tt format is:\n";
        cout<<hour<<":"<<minute<<":"<<second;
    }
};
int main(){
    time x,y,z;
    x.set(4,20,50);
    y.set(3,60,30);
    z.add(x,y);
    z.show();
}