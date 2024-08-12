// A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself). For example, 6 is a perfect number because its divisors are 1, 2, 3, and 6, and the sum of the proper divisors (1 + 2 + 3) equals 6.

#include<bits/stdc++.h>
using namespace std;

bool isPerfect(int n) {
    // Early return for numbers less than 2
    if (n < 2) {
        return false;
    }

    int sum = 1; // Start with 1 as it's a divisor of every number

    // Loop to find divisors and add them to sum
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    // Check if sum of divisors equals the number
    return sum == n;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPerfect(number)) {
        cout << number << " is a perfect number." << endl;
    } else {
        cout << number << " is not a perfect number." << endl;
    }

    return 0;
}