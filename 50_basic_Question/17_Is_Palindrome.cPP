#include<bits/stdc++.h>
using namespace std;

void is_palindrome(int n) {
    int originalNum = n;
    int reversedNum = 0;
    int temp = n; // Use a separate variable for reversing

    // Reverse the number
    while (temp > 0) {
        int digit = temp % 10;
        reversedNum = reversedNum * 10 + digit;
        temp /= 10;
    }

    // Compare the original number with the reversed number
    if (originalNum == reversedNum)
        cout << originalNum << " is a Palindrome" << endl;
    else
        cout << originalNum << " is not a Palindrome" << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    is_palindrome(n);
    return 0;
}
