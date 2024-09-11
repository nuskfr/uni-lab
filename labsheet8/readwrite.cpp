#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout("test.txt");
    char name[10],name1[10];
    cout<<"Enter name";
    cin>>name;
    fout<<name;
    fout.close();
    ifstream fin("test.txt");
    fin>>name1;
    cout<<name1;
    fin.close();
}