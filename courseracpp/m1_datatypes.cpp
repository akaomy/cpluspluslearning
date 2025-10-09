//
// Created by Anna Kozlova on 10/8/25.
//

#include <iostream>
#include <ostream>

void typeOfNumbers()
{
    int decimalLiteral = 500;
    std::cout << "decimalLiteral: " << decimalLiteral << std::endl;

    int octalNumber = 055;
    /* 5*8^1 + 5*8^0 = 40 + 5 = 45 */
    std::cout << "octalNumber 055: " << octalNumber << std::endl;

    int binaryNumber = 0b11011;
    std::cout << "binaryNumber 0b11011: " << binaryNumber << std::endl;

    int hexNumber = 0x037;
    std::cout << "hexNumber 0x037: " << hexNumber << std::endl;

}
void floatingPointNumbers() {
    float decimalLiteral = .0050;
    float decimalLiteral2 = 50.;
    float decimalLiteral3 = 100.32;
    std::cout << "decimalLiteral: " << decimalLiteral << std::endl;
    std::cout << "decimalLiteral2: " << decimalLiteral2 << std::endl;
    std::cout << "decimalLiteral3: " << decimalLiteral3 << std::endl;
};
void booleanValues() {
    bool booleanVal1 = true;
    bool booleanVal2 = false;
    std::cout << "booleanVal1: " << booleanVal1 << std::endl;
    std::cout << "booleanVal2: " << booleanVal2 << std::endl;
};
void stringValues() {
    std::string stringVal = "stringVal";
    std::cout << "stringVal: " << stringVal << std::endl;
};

int main() {
    int first = 1;
    float floatN = 2.5;
    bool isTrue = true;
    std::string s = "world";
    std::cout << "this is the " << first << "st line with " << floatN << " in it and it is True: " << isTrue << std::endl;

    std::cout << std::endl;
    typeOfNumbers();
    std::cout << std::endl;
    floatingPointNumbers();
    std::cout << std::endl;
    booleanValues();
    std::cout << std::endl;
    stringValues();
    return 0;
}


