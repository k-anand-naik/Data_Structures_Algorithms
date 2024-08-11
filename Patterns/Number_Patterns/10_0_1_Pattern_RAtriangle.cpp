#include<bits/stdc++.h>
using namespace std;

void Patter_0_1(int n){
    int count;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            ((i+j)%2 == 0) ? (count = 1) : (count = 0);
            cout<<count<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    Patter_0_1(n);
    return 0;
}