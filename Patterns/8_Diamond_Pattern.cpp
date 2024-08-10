#include <iostream>
using namespace std;

void printDiamond(int n) {
    // Print the top part (straight pyramid)
    for(int i = 0; i < n; i++) {
        for(int s = 0; s < n - i - 1; s++) {
            cout << " "; // Print leading spaces
        }
        for(int p = 0; p < 2 * i + 1; p++) {
            cout << "*"; // Print stars
        }
        cout << endl;
    }

    // Print the bottom part (reverse pyramid)
    for(int i = n - 1; i >= 0; i--) {
        for(int s = 0; s < n - i - 1; s++) {
            cout << " "; // Print leading spaces
        }
        for(int p = 0; p < 2 * i + 1; p++) {
            cout << "*"; // Print stars
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printDiamond(n);
    return 0;
}