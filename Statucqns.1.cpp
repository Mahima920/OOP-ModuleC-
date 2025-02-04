#include <iostream>
using namespace std;

class Counter {
private:
    int count; 
    static int totalObjects; 

public:
    Counter() {
        count = 0; 
        totalObjects++; 
    }

    void incrementCount() {
        count++;
    }

    int getCount() const {
        return count;
    }
    static int getTotalObjects() {
        return totalObjects;
    }
};
int Counter::totalObjects = 0;

int main() {
    Counter obj1, obj2, obj3;

    obj1.incrementCount();
    obj1.incrementCount();
    obj2.incrementCount();

    cout << "Count of obj1: " << obj1.getCount() << endl; // Output: 2
    cout << "Count of obj2: " << obj2.getCount() << endl; // Output: 1
    cout << "Count of obj3: " << obj3.getCount() << endl; // Output: 0

    cout << "Total objects created: " << Counter:: getTotalObjects() << endl; // Output: 3

    return 0;
}


