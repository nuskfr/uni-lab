#include<iostream>
using namespace std;
class matrix{
    static int row,col;
    int m[3][3];
    public:
    matrix(){
        row=3;
        col=3;
    }
    void set(){
        cout<<"Enter the elements of the matrix";
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cin>>m[i][j];
            }
        }
    }
    matrix operator + (matrix m2){
        matrix result;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                result.m[i][j]=m[i][j] + m2.m[i][j];
            }
        }
        return result;
    }
    void display(){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<m[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
};
int matrix::row;
int matrix::col;
int main(){
    matrix m1,m2,m3;
    m1.set();
    m2.set();
    m3=m1+m2;
    m3.display();
}