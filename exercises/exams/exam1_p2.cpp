#include <iostream>
using namespace std;

// non-recursive
int fibonacci(int num) {
    if (num <= 1) {
        return num;
    }
    int fib1 = 0;
    int fib2 = 1;
    int fib = 0;

    for (int i = 2; i <= num; ++i) {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }

    return fib;
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number (n) to display the first n elements of the Fibonacci series and prime numbers: ";
    cin >> n;

    while (n >= 0) {
        cout << "Fibonacci Series: ";
        for (int i = 0; i < n; ++i) {
            int fib = fibonacci(i);
            cout << fib << " ";
        }
        cout << "\n";

        cout << "Prime Numbers: ";
        int count = 0;
        for (int i = 2; count < n; ++i) {
            if (isPrime(i)) {
                cout << i << " ";
                count++;
            }
        }
        cout << "\n";

        cout << "Enter a number (n) to display the first n elements of the Fibonacci series and prime numbers: ";
        cin >> n;
    }

    cout << "Negative number is entered. Terminating the program..." << endl;

    return 0;
}