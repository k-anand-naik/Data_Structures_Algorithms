#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// i = 0 --> j = 1
// i = 0 --> j = 2,2
// i = 0 --> j = 3,3,3
// i = 0 --> j = 4,4,4,4