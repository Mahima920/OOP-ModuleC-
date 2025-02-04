#include<iostream>
#include<string>
#include"BankAccount.h"
using std::string;
using std::cout;
using std::endl;

BankAccount::BankAccount(string n, float b){
    name =n;
    balance =b;
    cout<<"BankAccount Constructor for:"<<name
        <<"balance:"<<balance<<endl;
}
string BankAccount::get_name(){
    return name;
}
float BankAccount::get_balance(){
    return balance;
}
