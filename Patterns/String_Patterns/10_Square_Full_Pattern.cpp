#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i = 0; i<2*n-1; i++){
        for(int j = 0; j<2*n-1; j++){
            int top = i;
            int right = j;
            int left = 2*n-2-j;
            int bottom = 2*n-2-i;
            cout<<(n-min(min(top, bottom), min(right, left)));
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    pattern(n);
    return 0;
}