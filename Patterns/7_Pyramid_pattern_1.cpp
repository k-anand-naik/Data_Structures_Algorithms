#include<bits/stdc++.h>
using namespace std;

void pyramid_pattern(int n){
    for(int i = 0; i<n; i++){
        // Pattern for spaces 1
        for(int s1 = 0; s1<n-i-1; s1++){
            cout << " ";
        }
        // print for stars
        for(int p = 0; p<2*i+1; p++){
            cout << "*";
        }
        // print the spaces 2
        for(int s2 = 0; s2<n-i-1; s2++){
            cout << " ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    pyramid_pattern(n);
}