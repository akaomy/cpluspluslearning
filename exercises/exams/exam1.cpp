#include <iostream>
#include <vector>
using namespace std;


bool is_triangle(int x, int y, int z) {
    int max, sum;
    
    if (x >= y && x >= z) {
        max = x;
        sum = y + z;
    }
    else if (y >= x && y >= z) {
        max = y;
        sum = x + z;
    }
    else {
        max = z;
        sum = x + y;
    }

    if ((sum - max) > max) {
        return true;
    } else {
        return false;
    }
}

bool is_right_angle_triangle(int x, int y, int z) {
    int nmax, n1, n2;
    
    if (x >= y && x >= z) {
        nmax = x;
        n1 = y;
        n2 = z;
    }
    else if (y >= x && y >= z) {
        nmax = y;
        n1 = x;
        n2 = z;
    }
    else {
        nmax = z;
        n1 = x;
        n2 = y;
    }

    return (nmax * nmax == (n1 * n1 + n2 * n2));
}

bool is_sequence(int x, int y, int z) {
//true if x, y, z form a sequence like 3, 4, 5 or 2, 3, 6
//false if not a sequence
    if ((x + 1 == y && y + 1 == z) || (z + 1 == y && y + 1 == x)) {
        return true;
    } else {
        return false;
    }
};

void printAscending(int x, int y, int z) {
    if (x > y) {
            int temp = x;
            x = y;
            y = temp;
    }
        if (x > z) {
            int temp = x;
            x = z;
            z = temp;
    }
        if (y > z) {
            int temp = y;
            y = z;
            z = temp;
    }
    cout << "Sorted in ascending order: " << x << " " << y << " " << z << endl;
}

int main () {

    int a, b, c;

    while(true) {
        cout << "enter 3 positive numbers a, b, c ";
        cin >> a >> b >> c;
        if (is_triangle(a, b, c)) {
            cout << "They can form a triangle." << endl;
            if (is_right_angle_triangle(a, b, c)) {
                cout << "They can form a right-angle triangle." << endl;
            }
        } else {
            cout << "They cannot form a triangle." << endl;
        }

        if (is_right_angle_triangle(a, b, c)) {
            cout << "They can form a right-angle triangle." << endl;
        }

        printAscending(a, b, c);

        if (is_sequence(a, b, c)) {
            cout << "They form a sequence like 2, 3, 4 or 4, 5, 6." << endl;
        } else {
            cout << "They do not form a sequence." << endl;
        }

        cout << "Do you want to repeat? (yes/no): ";
        
        string repeat;
        cin >> repeat;
        if (repeat != "yes") {
            break;
        }
    }

    return 0;
}

