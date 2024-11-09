#include <iostream>

int checkForLargedtNum(int a, int b);
int checkForSmallestNum(int a, int b);


int main() {
    int i, num1, num2;
    
    std::cout << "Operation mode: " << std::endl;
    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Subtraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "5. Modulus" << std::endl;
    std::cout << "Please enter the operation mode: " << std::endl;
    std::cin >> i;

    std::cout << "Please enter first number" << std::endl;
    std::cin >> num1;
    std::cout << "Please enter second number" << std::endl;
    std::cin >> num2;

    int largerNum = checkForLargedtNum(num1, num2);
    int smallestNum = checkForSmallestNum(num1, num2);

    std::cout << "The result: " << std::endl;
    
    switch(i) {
        case 1:
            std::cout << num1 << " + " << num2 << " is " << largerNum + smallestNum;
            break;
        case 2:
            std::cout << num1 << " - " << num2 << " is " << largerNum - smallestNum;
            break;
        case 3:
            std::cout << num1 << " * " << num2 << " is " << largerNum * smallestNum;
            break;
        case 4:
            std::cout << num1 << " / " << num2 << " is " << largerNum / smallestNum;
            break;
        case 5:
            std::cout << num1 << " % " << num2 << " is " << largerNum % smallestNum;
    }
    std::cout << std::endl;
    return 0;

    return 0;
}
// i need to switch input numbers in place if one is biggern than another
// bigger shoud go first
int checkForLargedtNum(int a, int b) {
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    }
    return a; // if numbers are equal, return first one
}

int checkForSmallestNum(int a, int b) {
    if (a > b) {
        return b;
    } else if (a < b) {
        return a;
    }
    return a; // if numbers are equal, return first one
}