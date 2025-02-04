#include <iostream>
#include <cmath>
using namespace std;


double calculateArea(double a, double b, double c) 
{
    double s = (a + b + c) / 2; 
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
double calculateArea(double base, double height)
 {
    return 0.5 * base * height;
}

int main() {
    
    int choice;
    cout << "Choose the method to calculate the area of the triangle:\n";
    cout << "1. Using three sides of the triangle\n";
    cout << "2. Using base and height of the triangle\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        
        double a, b, c;
        cout << "Enter the lengths of the three sides: ";
        cin >> a >> b >> c;

        
        double area = calculateArea(a, b, c);
        cout << "The area of the triangle is: " << area << endl;
    } 
    else if (choice == 2)
     {
      
        double base, height;
        cout << "Enter the base and height of the triangle: ";
        cin >> base >> height;

    
        double area = calculateArea(base, height);
        cout << "The area of the triangle is: " << area << endl;
    } else {
        cout << "Invalid choice! Please run the program again.\n";
    }

    return 0;
}
