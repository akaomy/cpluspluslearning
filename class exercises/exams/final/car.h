#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>
using namespace std;


class Car {
    public:
        Car();
        ~Car();

        Car(const Car& car);

        Car& operator=(const Car& car);

        Car(const string& model, bool electric);

        string getModel() const;
        bool isElectric() const;

        static int getCount();
        static void setCount(int count_i);

        void read();
        void print(ostream& os) const;

    private:
        static int count;
        string model;
        bool electric;

        void set(const string& model_i, bool electric_i);
};

#endif // CAR_H