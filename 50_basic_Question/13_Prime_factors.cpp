#include<bits/stdc++.h>
using namespace std;

// Function to find and print prime factors of a given number
void prime_factors(int n) {
    vector<int> factors;

    // Print the number of 2s that divide n
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }

    // n must be odd at this point, so we can skip even numbers
    for (int i = 3; i <= sqrt(n); i += 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }

    // This condition is to check if n is a prime number
    // greater than 2
    if (n > 2) {
        factors.push_back(n);
    }

    // Display the prime factors
    cout << "Prime factors: ";
    for (int factor : factors) {
        cout << factor << " ";
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    prime_factors(num);

    return 0;
}
