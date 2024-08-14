// // A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself). For example, 6 is a perfect number because its divisors are 1, 2, 3, and 6, and the sum of the proper divisors (1 + 2 + 3) equals 6.


#include<bits/stdc++.h>
using namespace std;

void isPerfect(int n){
    vector<int> divisors;
    int sum = 0;

    for(int i = 1; i<n; i++){
        if(n%i == 0){
            divisors.push_back(i);
            sum += i;
        }
    }
    (sum == n) ? cout << "Yes" : cout << "No";
}

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    isPerfect(n);
    return 0;
}


// int main() {
//     int n;
//     cin >> n;
//     vector<int> divisors;
    
//     // Find divisors of n
//     for(int i = 1; i < n; i++) {
//         if(n % i == 0) {
//             divisors.push_back(i);
//         }
//     }
    
//     // Calculate the sum of divisors
//     int sum = 0;
//     for(int i : divisors) {
//         sum += i;
//     }
    
//     // Check if the sum of divisors equals n
//     (sum == n) ? cout << "Yes" : cout << "Not";
//     return 0;
// }


