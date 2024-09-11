#include<iostream>
using namespace std;
const int sz=50;
class string1{
    string str;
    public:
    string1(){
        str=" ";
    }
    string1 (string ss){
        str=ss;
    }
    void display(){
        cout<<str;
    }
    string1 operator += (string1 ss){
        str=str+ss.str;
    }
};
int main(){
    cout<<"Before concatenation";
    string1 s1("\nHappy birthday");
    string1 s2(" to you.");
    s1.display();
    cout<<"\n";
    s2.display();
    s1+=s2;
    cout<<"\nAfter concatenation.";
    s1.display();
    return 0;
}