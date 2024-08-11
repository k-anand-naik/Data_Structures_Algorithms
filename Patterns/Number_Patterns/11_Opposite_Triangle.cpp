#include<bits/stdc++.h>
using namespace std;

// void opposite_triangles(int n) {
//     // Write your code here.
//     for(int i = 0; i<n; i++){
//         // Print first triangle
//         for(int s1 = 0; s1<=i; s1++){
//             cout<<s1+1<<" ";
//         }

//         // print 2(n-i-1) i.e middle fields of 2*n fileds except 0 and 2*nth filed
//         for(int p = 0; p<2*(n-i-1); p++){
//             cout<<" ";
//         }

//         // Print the mirror image of the 1st triangle
//         for(int s2 = i+1; s2>0; s2--){
//             cout<<s2<<" ";
//         }
//         cout<<endl;
//     }
// }

void opposite_triangles(int n) {
    for (int i = 0; i < n; i++) {
        // Print first triangle
        for (int s1 = 0; s1 <= i; s1++) {
            cout << s1 + 1 << " ";
        }

        // Print the spaces in the middle
        for (int p = 0; p < 2 * (n - i - 1); p++) {
            cout << " ";
        }

        // Print the mirror image of the first triangle
        for (int s2 = i + 1; s2 > 0; s2--) {
            cout << s2 << " ";
        }
        cout << endl;
    }
}


void pattern(int n){
    int space = 2*(n-1);
    for(int i = 1; i<=n; i++){
        for(int j = 1;j<=i; j++){
            cout<<j<<" ";
        }
        for(int j = 1; j<=space; j++){
            cout<<" ";
        }
        for(int j = i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
        space -= 2;
    }
}

int main() {
    int n;
    cout << "Enter the number of sides of the first triangle: ";
    cin >> n;
    opposite_triangles(n);
    pattern(n);
    return 0;
}




