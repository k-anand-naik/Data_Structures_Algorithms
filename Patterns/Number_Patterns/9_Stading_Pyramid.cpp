#include<bits/stdc++.h>
using namespace std;

void standing_pyramid(int n){
    for(int i=0; i<n;i++){
        for(int j = 0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1-i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// void standing_pyramid(int n) {
//     for (int i = 0; i < 2 * n - 1; i++) {
//         int row = i;
//         if (row >= n) {
//             row = 2 * n - 2 - i;  // Corrected calculation for rows beyond the middle
//         }
//         for (int j = 0; j <= row; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    standing_pyramid(n);
    return 0;
}