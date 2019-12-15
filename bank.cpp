#include<iostream>
#include<string.h>
using namespace std;
class bank
{
    int acno;
    char nm[100],acctype[100];
    float bal;
    public:
    bank(int acc_no, char name[],char acc_type[], float balance)
    {
        acno=acc_no;
        strcpy(nm,name);
        strcpy(acctype,acc_type);
        bal=balance;
    }
    void deposit();
    void withdraw();
    void display();
};
void bank::deposit()
{
    int damt1;
    cout<<"\n Enter the deposit amount :";
    cin>>damt1;
    bal+=damt1;
}
void bank::withdraw()
{
    int wamt;
    cout<<"\n Enter the withdrawal amount : ";
    cin>>wamt;
    if(wamt>bal)
    {
        cout<<"\n Cannot withdraw amount"<<endl;
    }
    else
    {
        bal-=wamt;
    }
}
void bank::display()
{
    cout<<"-------------"<<endl;
    cout<<"Account number :"<<acno<<endl;
    cout<<"Name :"<<nm<<endl;
    cout<<"Account Type: "<<acctype<<endl;
    cout<<"Balance "<<bal<<endl;
}
int main()
{
    int acc_no;
    char name[100], acc_type[100];
    float balance;
    cout<<"\n Enter details: \n";
    cout<<"---------";
    cout<<"\n Account number: ";
    cin>>acc_no;
    cout<<"\n Name: \n";
    cin>>name;
    cout<<"\n Account Type: \n";
    cin>>acc_type;
    cout<<"\n Balance: "<<endl;
    cin>>balance;
    bank b1(acc_no,acc_type,name,balance);
    b1.deposit();
    b1.withdraw();
    b1.display();
    return 0;
}