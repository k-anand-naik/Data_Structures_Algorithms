#include<bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to find prime numbers in a given range and add them to a vector
void prime_numbers_in_range(int r1, int r2) {
    vector<int> prime_numbers;
    for (int i = r1; i <= r2; i++) {
        if (isPrime(i)) {
            prime_numbers.push_back(i);
        }
    }

    // Displaying the prime numbers found in the range
    if (prime_numbers.empty()) {
        cout << "No prime numbers in the given range." << endl;
    } else {
        cout << "Prime numbers in the range " << r1 << " to " << r2 << " are: ";
        for (int prime : prime_numbers) {
            cout << prime << " ";
        }
        cout << endl;
    }
}

int main() {
    int r1, r2;
    cout << "Enter the range (r1 and r2): ";
    cin >> r1 >> r2;

    prime_numbers_in_range(r1, r2);

    return 0;
}
