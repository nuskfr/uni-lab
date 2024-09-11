#include<iostream>
#include<fstream>
using namespace std;
int main(){
        char ch;
    ifstream fin("test.txt");
    ofstream fout("sample.txt");
    fin.seekg(0,ios::beg);
    fin.get(ch);
    while (fin){
        fin.get(ch);
        fout.put(ch);
    }
    fin.close();
    fout.close();
    ifstream infile("sample.txt");
    infile.seekg(0,ios::beg);
    infile.get(ch);
    while(infile){
        infile.get(ch);
        cout<<ch;
    }
    infile.close();
    return 0;
}