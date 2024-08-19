#include<bits/stdc++.h>
using namespace std;

void pyramid(int n){
    for(int i = 0; i < n; i++){
        // Leading spaces for center alignment
        for(int s1 = 0; s1 < n - i - 1; s1++){
            cout << " ";
        }

        // Numbers with space in between
        for(int p = 0; p <= i; p++){
            cout <<" * ";
        }

        cout << endl; // Move to the next line after each row
    }
}

int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    pyramid(n);
    return 0;
}
