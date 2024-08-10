#include<bits/stdc++.h>
using namespace std;

void numbered_RAtriangle(int n){
    int number = 1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout<<number<<" ";
            // cout<<number++<<" ";
            number++;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    numbered_RAtriangle(n);
    return 0;
}