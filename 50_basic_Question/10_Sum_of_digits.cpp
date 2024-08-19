#include<bits/stdc++.h>
using namespace std;

void sum_of_digits_of_number(int n){
    int sum_of_digits = 0;
    while(n != 0){
        sum_of_digits = sum_of_digits + n%10;
        n = n/10;
    }
    cout<<"Sum of digits of number "<<n<<" is : "<<sum_of_digits;
    cout<<endl;
}

void sum_of_digits_of_number_array(int num){
    int digits[10], i = 0, sum = 0;

    while (num != 0) {
        digits[i++] = num % 10;
        num /= 10;
    }

    for (int j = 0; j < i; j++) {
        sum += digits[j];
    }

    cout << "Sum of digits: " << sum << endl;
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter a number for its sum : ";
    cin >> n;
    sum_of_digits_of_number(n);
    sum_of_digits_of_number_array(n);
}