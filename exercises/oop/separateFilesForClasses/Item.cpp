// memeber function definitions

#include <iostream>
using namespace std;

#include "Item.h"

void Item::SetWeightAmount(int weightAmount) {
    weight = weightAmount;
}

void Item::PrintWeight() const {
    cout << "Weight amount (kg): " << weight << endl;
}