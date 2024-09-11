#include<iostream>
using namespace std;
class vector{
    int i,j,k;
    public:
    void set(int a,int b, int c){
        i=a;
        j=b;
        k=c;
    }
    void mul(vector v1, int n){
        i=v1.i*n;
        j=v1.j*n;
        k=v1.k*n;
    }
    void display(){
        cout<<i<<"i+"<<j<<"j+"<<k<<"k"<<endl;
    }
};
int main(){
    vector v1,v2;
    v1.set(3,4,5);
    v2.mul(v1,4);
    cout<<"v1:";
    v1.display();
    cout<<"answer:";
    v2.display();
}