#include <iostream>
#include <cmath>
using namespace std;

double calculateVolume(double side) {
    return pow(side, 3);
}


double calculateVolume(double length, double breadth, double height) {
    return length * breadth * height;
}


double calculateVolume(double radius, double height, bool isCylinder) {
    return M_PI * pow(radius, 2) * height;
}

int main() {
   
    int choice;
    cout << "Choose the shape to calculate its volume:\n";
    cout << "1. Cube\n";
    cout << "2. Cuboid\n";
    cout << "3. Cylinder\n";
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    if (choice == 1) {
        
        double side;
        cout << "Enter the side length of the cube: ";
        cin >> side;

        
        double volume = calculateVolume(side);
        cout << "The volume of the cube is: " << volume << endl;
    } else if (choice == 2) {
        
        double length, breadth, height;
        cout << "Enter the length, breadth, and height of the cuboid: ";
        cin >> length >> breadth >> height;

        
        double volume = calculateVolume(length, breadth, height);
        cout << "The volume of the cuboid is: " << volume << endl;
    } else if (choice == 3) {
       
        double radius, height;
        cout << "Enter the radius and height of the cylinder: ";
        cin >> radius >> height;

    
        double volume = calculateVolume(radius, height, true);
        cout << "The volume of the cylinder is: " << volume << endl;
    } else {
        cout << "Invalid choice! Please run the program again.\n";
    }

    return 0;
}