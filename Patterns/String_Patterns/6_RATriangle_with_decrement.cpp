#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i = 0; i<n; i++){
        char letter = 'A'+(n-1);
        for(int j = 0; j<=i; j++){
            cout<<letter<<" ";
            letter--;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern(n);
    return 0;
}
