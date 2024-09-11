#include<iostream>
using namespace std;
class vector{
    int i,j,k;
    public:
    vector(){
        i=0;
        j=0;
        k=0;
    }
    vector(int a,int b,int c){
        i=a;
        j=b;
        k=c;
    }
    friend vector operator - (vector);
    void display(){
        cout<<"\ni="<<i<<"\tj="<<j<<"\tk="<<k;
    }
};
    vector operator - (vector b){
        vector a;
        a.i=-b.i;
        a.j=-b.j;
        a.k=-b.k;
        return (a);
    }
int main(){
    vector v(1,2,3),a;
    a=-v;
    a.display();
}