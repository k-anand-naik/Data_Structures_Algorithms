#include <iostream>
#include <vector>
using namespace std;

// Linear search in a normal array
int linearSearchArray(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;  // Element found, return its index
        }
    }
    return -1;  // Element not found
}

// Linear search in a std::vector
int linearSearchVector(const vector<int>& vec, int x) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == x) {
            return i;  // Element found, return its index
        }
    }
    return -1;  // Element not found
}

int main() {
    // Searching in a normal array
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x1 = 10;

    int resultArray = linearSearchArray(arr, n, x1);
    if (resultArray != -1) {
        cout << "Element " << x1 << " found in array at index " << resultArray << endl;
    } else {
        cout << "Element " << x1 << " not found in array" << endl;
    }

    // Searching in a std::vector
    vector<int> vec = {3, 5, 7, 9, 11, 13, 15};
    int x2 = 9;

    int resultVector = linearSearchVector(vec, x2);
    if (resultVector != -1) {
        cout << "Element " << x2 << " found in vector at index " << resultVector << endl;
    } else {
        cout << "Element " << x2 << " not found in vector" << endl;
    }

    return 0;
}
