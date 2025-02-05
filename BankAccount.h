#pragma once
#include <string>

//Declaration file
//No definition is written in this file

class BankAccount {
    private:

        std::string name {};
        float balance {0};
public: 
    BankAccount() = default;

    BankAccount(std::string n, float b);

    std::string get_name();

    float get_balance();
};

