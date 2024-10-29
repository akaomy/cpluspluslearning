#include <string>
#include <iostream>
#include "car.h"
using namespace std;

int Car::count = 0;

Car::Car() {
    set("", false);
    count++;
}

Car::~Car() {
    count--;
}

Car::Car(const Car& car) {
    set(car.model, car.electric);
    count++;
}

Car& Car::operator=(const Car& car) {
    if (this == &car)
        return (*this);
    
    set(car.model, car.electric);
    return *this;
}

Car::Car(const string& model, bool electric) {
    set(model, electric);
    count++;
}

string Car::getModel() const {
    return model;
}

bool Car::isElectric() const {
    return electric;
}

int Car::getCount() {
    return count;
}

void Car::setCount(int count_i) {
    count = count_i;
}

void Car::read() {
    string model_i;
    bool electric_i;

    cout << "Enter model of the car: ";
    getline(cin, model_i);

    cout << "Is the car electric? (1 for true, 0 for false): ";
    cin >> electric_i;

    set(model_i, electric_i);
}

void Car::print(std::ostream& os) const {
    os << "Model = " << model << ", Electric = " << (electric ? "Yes" : "No") << std::endl;
}

void Car::set(const std::string& model_i, bool electric_i) {
    model = model_i;
    electric = electric_i;
}