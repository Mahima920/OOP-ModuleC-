#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double a, b, c, height, area, perimeter;

   
    cout << "Enter the three sides of the triangle (a, b, c): ";
    cin >> a >> b >> c;


    perimeter = a + b + c;

    cout << "Enter the height of the triangle corresponding to base a: ";
    cin >> height;


    area = 0.5 * a * height;

    cout << "Area of the triangle: " << area << endl;
    cout << "Perimeter of the triangle: " << perimeter << endl;

    return 0;
}
