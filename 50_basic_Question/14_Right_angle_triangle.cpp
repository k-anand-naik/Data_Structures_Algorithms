#include<bits/stdc++.h>
using namespace std;

void rt_pattern(int n){
    int count = 1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout<<count++<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    rt_pattern(n);
    return 0;
}