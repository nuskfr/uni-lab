#include<iostream>
using namespace std;
class time{
    int hour, minute, second;
    public:
    void set(int h,int m,int s){
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
        if(second>60){
            second=second-60;
            minute=minute+1;
        }
    }
    void display(){
        cout<<"The addition of two time object is:"<<endl<<hour<<":"<<minute<<":"<<second;
    }
};
int main(){
    time x,y,z;
    x.set(2,45,15);
    y.set(14,52,9);
    z.add(x,y);
    z.display();
}