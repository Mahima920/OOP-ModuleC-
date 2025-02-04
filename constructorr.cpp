#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    bool isValid() const {
        if (month < 1 || month > 12 || day < 1 || day > 31)
            return false;
        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
            return false;
        if (month == 2) {
            bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
            if (isLeapYear && day > 29) return false;
            if (!isLeapYear && day > 28) return false;
        }
        return true;
    }

    void displayDate() const {
        if (isValid())
            cout << "Date: " << day << "/" << month << "/" << year << endl;
        else
            cout << "Invalid date!" << endl;
    }
};

int main() {
   
    Date date1(29, 2, 2024); 
    date1.displayDate();

    Date date2(31, 4, 2023); 
    date2.displayDate();
    return 0;
}
