#include<bits/stdc++.h>
using namespace std;

void print01Triangle(int n){
    int count = 1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout<<count<<" ";
            count = 1-count;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    print01Triangle(n);
}