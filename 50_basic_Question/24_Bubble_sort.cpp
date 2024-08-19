#include<bits/stdc++.h>
using namespace std;

// Bubble sort for a normal array
void bubbleSortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Bubble sort for a std::vector
void bubbleSortVector(vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                // Swap the elements
                swap(vec[j], vec[j + 1]);
            }
        }
    }
}

int main() {
    // Sorting a normal array
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSortArray(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sorting a std::vector
    vector<int> vec = {64, 34, 25, 12, 22, 11, 90};

    cout << "Original vector: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    bubbleSortVector(vec);

    cout << "Sorted vector: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}