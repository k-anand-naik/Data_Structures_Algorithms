#include<bits/stdc++.h>
using namespace std;

void raTriangle(int n){
    char letter = 'A';
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout<<letter<<" ";
            letter++;
        }
        letter = 'A';
        cout<<endl;
    }
}

void raTriangle_1(int n){
    for(int i = 0; i<n; i++){
        for(char j = 'A'; j<='A'+i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    raTriangle(n);
    raTriangle_1(n);
}