#include<bits/stdc++.h>
using namespace std;

void numberCrown(int n) {
    int iniSpace = 0;
    for(int i = 0; i<n; i++){
        // Star
        for(int j = 1; j<=n-i; j++){
            cout<<"*";
        }
        // Space
        for(int j = 0; j<iniSpace; j++){
            cout<<" ";
        }
        // Star
        for(int j = 1; j<=n-i;j++){
            cout<<"*";
        }
        iniSpace += 2;
        cout<<endl;
    }

    iniSpace = 2*n-2;
    for(int i = 1; i<=n; i++){ 
        // Star
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }
        // Space
        for(int j = 0; j<iniSpace; j++){
            cout<<" ";
        }
        // Star
        for(int j = 1; j<=i;j++){
            cout<<"*";
        }
        iniSpace -= 2;
        cout<<endl;
    }

}

int main() {
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    numberCrown(n);
    return 0;
}

// Stars : Spaces : Stars