#include<bits/stdc++.h>
using namespace std;

void reverse_RATriangle(int n){
    // char letter = 'A';
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<n-i; j++){
    //         cout<<letter<<" ";
    //         letter++;
    //     }
    //     letter = 'A';
    //     cout<<endl;
    // }

    for(int i = 0; i<n; i++){
        for(char j = 'A'; j<('A'+n-i); j++){
            cout<<j<<" "; 
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    reverse_RATriangle(n);
    return 0;
}