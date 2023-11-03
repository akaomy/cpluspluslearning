#include <iostream>
#include <vector>
using namespace std;

int main () {
    // do while / for / while loops with vector
    vector<int> a;
    vector<double> b = {1.1, 2.2, 3.3, 4.4};
    vector<string> c;

    c.push_back("one");
    c.push_back("three");
    c.push_back("four");
    c.push_back("five");

    int num;
    cout << "enter your num (0 to 3): ";
    cin >> num;

    int someArr[num];
    
    for (int i = 0; i <= num; i++) {
        a.push_back(i);
        cout << "your array1 item: " << a[i] << endl;
    }

    for (int j = 0; j <= num; j++) {
        cout << "your array2 item: " << c[j] << endl;
    }


    
}
