#include <iostream>

int main() {
    int i; // variable definition or default initialization
    int iVar = 0; // copy initialization
    int oVar(100); // direct initialisation 
    int jVar{100}; // uniform intialization
    int uVar{}; // value initialisation

    std::cout << "Please enter an integer value: ";
    std::cin >> i;
    std::cout << "The value you entered is: " << i;
    std::cout << "\n";



    // control flow
    if (i >= 0 && i < 100) {
        std::cout << "less than 100" << std::endl;
    } else {
        std::cout << "greater than or equal to 100" << std::endl;
    }

    return 0;
}