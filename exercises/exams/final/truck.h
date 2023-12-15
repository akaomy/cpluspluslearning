#ifndef TRUCK_H
#define TRUCK_H
#include "car.h"
using namespace std;

class Truck : public Car {
    public:
        Truck();
        ~Truck();

        Truck(const string& model, bool electric, int engine);

        int getEngine() const;

        void read();
        void print(ostream& os) const;

    private:
        int engine;
};

#endif // TRUCK_H
