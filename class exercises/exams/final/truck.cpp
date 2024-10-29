#include "truck.h"
using namespace std;

Truck::Truck() : Car(), engine(0) {}

Truck::~Truck() {}

Truck::Truck(const string& model, bool electric, int engine)
    : Car(model, electric), engine(engine) {}

int Truck::getEngine() const {
    return engine;
}

void Truck::read() {
    Car::read();

    cout << "Enter engine size of the truck: ";
    cin >> engine;
}

void Truck::print(ostream& os) const {
    Car::print(os);
    os << "Engine = " << engine << " cc" << endl;
}