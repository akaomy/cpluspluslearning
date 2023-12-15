#include "truck.h"
#include <iostream>
using namespace std;


int main() {
    Truck truck1;
    Truck truck2("CyberTruck", true, 845);

    truck1.read();
    cout << "\nTruck 1 Details:" << endl;
    truck1.print(cout);

    cout << "\nTruck 2 Details:" << endl;
    truck2.print(cout);

    cout << "\nTotal Number of Cars: " << Car::getCount() << endl;

    return 0;
}