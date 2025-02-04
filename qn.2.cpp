#include <iostream>
using namespace std;

int main() {
    double salary, bonus, netSalary;

    cout << "Enter the basic salary: ";
    cin >> salary;

    
    if (salary > 20000 && salary <= 25000) {
        bonus = 0.15 * salary; 
    } else if (salary <= 20000) {
        bonus = 0.10 * salary; 
    } else {
        bonus = 0.05 * salary; 
    }


    cout << "Basic Salary: " << salary << endl;
    cout << "Bonus: " << bonus << endl;
    cout << "Net Salary: " << netSalary << endl;

    return 0;
}
