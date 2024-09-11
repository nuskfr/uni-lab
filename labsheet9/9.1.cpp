#include<iostream>
using namespace std;
class student{
    private:
    char name[25],address[30],sem[20],faculty[25];
    int crn;
    public:
    void getdata(){
        cout<<"Enter the details of a student:\n";
        cout<<"Name:";
        cin>>name;
        cout<<"\nAddress:";
        cin>>address;
        cout<<"\nSemester:";
        cin>>sem;
        cout<<"\nFaculty:";
        cin>>faculty;
        cout<<"\nCollege roll no.:";
        cin>>crn;
    }
    void display(){
        cout<<"The details of the students are as follows:\n";
        cout<<"\nName:"<<name;
        cout<<"\nAddress:"<<address;
        cout<<"\nSemester:"<<sem;
        cout<<"\nFaculty:"<<faculty;
        cout<<"\nCollege roll no.:"<<crn;
    }
};
int main(){
    student *ps;
    student s;
    ps=&s;
    ps->getdata();
    ps->display();
}