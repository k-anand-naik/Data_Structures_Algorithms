#include<bits/stdc++.h>
using namespace std;
void patter(int n){
    // char letter = 'A';
    // for(int i = 0; i<n; i++){
    //     for(char j = 0; j<=i; j++){
    //         cout<<letter<<" ";
    //     }
    //     cout<<endl;
    //     letter = letter + 1;
    // }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout<<(char)(65+i)<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    patter(n);
    return 0;
}