#include<iostream>
#include "BankAccount.h"

using std::cout;
using std::endl;

int main(){
    BankAccount claudia_account("Claudia", 1000.45f);
    BankAccount peter_account{"Peter",5555.55f};

    BankAccount sarah_account;

    cout<<"--Claudias's account--"<<endl;
    cout<<claudia_account.get_name()<<endl;
    cout<<claudia_account.get_balance()<<endl;

    cout<<"--Peter's account--"<<endl;
    cout<<peter_account.get_name()<<endl;
    cout<<peter_account.get_balance()<<endl;

    cout<<"--Sarah's account--"<<endl;
    cout<<sarah_account.get_name()<<endl;
    cout<<sarah_account.get_balance()<<endl;

    return 0;
}
