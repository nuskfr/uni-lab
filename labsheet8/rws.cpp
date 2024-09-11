#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("test.txt",ios::out);
    char ch;
    cin.get(ch);
    while(ch!='\n'){
        fout.put(ch);
        cin.get(ch);
    }
    fout.close();
    ifstream fin;
    fin.open("test.txt",ios::in);
    while(fin){
        fin.get(ch);
        if(ch!=' '){
            cout.put(ch);
        }
    }
    fin.close();
    return 0;
}