#include<iostream>
using namespace std;
class count{
    int a[100],n,positive,negative,zero;
    public:
    count(){
        positive=0;
        negative=0;
        zero=0;
    }
    void getn(){
        cout<<"Enter the number of terms:\t";
        cin>>n;
        cout<<"Enter the terms:";
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
    }
    void getcnt(){
        for(int i=0;i<n;i++){
            if(a[i]>0){
                positive++;
            }
            else if(a[i]<0){
                negative++;
            }
            else{
                zero++;
            }
        }
    }
    ~count(){
        cout<<"\nPositive="<<positive<<endl<<"Negative="<<negative<<endl<<"Zero="<<zero;
    }
};
int main(){
    count ct;
    ct.getn();
    ct.getcnt();
}