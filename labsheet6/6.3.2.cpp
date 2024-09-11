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
    friend matrix operator * (matrix,matrix);
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
matrix operator * (matrix m1, matrix m2){
        matrix result;
        int sum;
        for(int i=0;i<m1.row;i++){
            for(int j=0;j<m1.col;j++){
                sum=0;
                for(int k=0;k<m1.col;k++){
                    sum += m1.m[i][k] * m2.m[k][j];
                }
                result.m[i][j]=sum;          
            }
        }
        return result;
    }

int main(){
    matrix m1,m2,m3;
    m1.set();
    m2.set();
    m3=m1*m2;
    m3.display();
}