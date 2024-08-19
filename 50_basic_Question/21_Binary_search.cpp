#include<bits/stdc++.h>
using namespace std;

// Binary search in a normal array
int binarySearchArray(int arr[], int n, int x) {
    int l = 0;
    int h = n - 1;
    while (l <= h) {
        int mid = l + (h - l) / 2;
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }
    return -1;  // Element not found
}

// Binary search in a std::vector
int binarySearchVector(const vector<int>& vec, int x) {
    int l = 0;
    int h = vec.size() - 1;
    while (l <= h) {
        int mid = l + (h - l) / 2;
        if (vec[mid] == x) {
            return mid;
        } else if (vec[mid] < x) {
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }
    return -1;  // Element not found
}

int main() {
    // Searching in a normal array
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x1 = 10;

    int resultArray = binarySearchArray(arr, n, x1);
    if (resultArray != -1) {
        cout << "Element " << x1 << " found in array at index " << resultArray << endl;
    } else {
        cout << "Element " << x1 << " not found in array" << endl;
    }

    // Searching in a std::vector
    vector<int> vec = {3, 5, 7, 9, 11, 13, 15};
    int x2 = 9;

    int resultVector = binarySearchVector(vec, x2);
    if (resultVector != -1) {
        cout << "Element " << x2 << " found in vector at index " << resultVector << endl;
    } else {
        cout << "Element " << x2 << " not found in vector" << endl;
    }

    return 0;
}
