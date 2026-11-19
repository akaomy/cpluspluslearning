#include <iostream>
#include <vector>
using namespace std;


void print_array_forloop(const vector<int>& a) {
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void merge_2_sorted_vectors(vector<int>& resultedVector, vector<int>& a, const vector<int>& b) {
    resultedVector.clear();

    if (a.empty() || b.empty()) {
        return;
    }

    // indexes for vector a, b, and c
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            resultedVector.push_back(a[i]);
            ++i;
        } else {
            resultedVector.push_back(b[j]);
            ++j;
        }
    }
    // if there are remaining elements in a vector a or b, push them to the resultedVector
    while (i < a.size()) {
        resultedVector.push_back(a[i]);
        ++i;
    }
    while (j < b.size()) {
        resultedVector.push_back(b[j]);
        ++j;
    }

}


int main() {
    vector<int> a = {10, 20, 30, 40, 50};
    vector<int> b = {60, 70, 80, 90, 100};
    vector<int> c;

    cout << "print_array_forloop for a: " << endl;
    print_array_forloop(a);
    
    cout << "print_array_forloop for b: " << endl;
    print_array_forloop(b);

    cout << "merged print_array_forloop_reverse: " << endl;
    merge_2_sorted_vectors(c, a, b);
    print_array_forloop(c);

    return 0;
}