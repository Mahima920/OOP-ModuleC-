#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    
    Employee(const string& empName, int empID, double empSalary) 
        : name(empName), employeeID(empID), salary(empSalary) {}

    void updateSalary(double performanceBonus) {
        salary += performanceBonus;
    }

    void displayDetails() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    
    Employee emp("John Doe", 1234, 50000);
    emp.displayDetails();
    cout << "Updating salary based on performance...\n";
    emp.updateSalary(5000); 
    emp.displayDetails();
    return 0;
}
