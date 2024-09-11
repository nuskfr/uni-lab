#include<iostream>
#include<string.h>
using namespace std;
class savingAccount{
    private:
    string name;
    string address;
    int ac_number;
    double balance,amount,withdraw;
    public:
    void getdata(){
        cout<<"Enter the details to create a new account:\n";
        cout<<"Name:";
        cin>>name;
        cout<<"\nAddress:";
        cin>>address;
        cout<<"\nAccount number:";
        cin>>ac_number;
        cout<<"\nEnter first deposit";
        cin>>balance;
    }
    void deposit(){
        cout<<"\nEnter the amount you want to deposit to your account:";
        cin>>amount;
        balance=balance+amount;
    }
    void withdrawal(){
        cout<<"\nHow much money do you want to withdraw";
        cin>>withdraw;
        balance=balance-withdraw;
    }
    void display(){
        cout<<"\nYour balance is:\n";
        cout<<"\nAccount number:"<<ac_number;
        cout<<"\nRemaining balance:"<<balance;
    }
};
int main(){
    savingAccount *ps;
    savingAccount s;
    ps=&s;
    ps->getdata();
    ps->deposit();
    ps->withdrawal();
    ps->display();
}