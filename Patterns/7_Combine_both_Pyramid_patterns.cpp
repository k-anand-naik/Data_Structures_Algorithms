#include<bits/stdc++.h>
using namespace std;

void straight_pyramid(int n){
    for(int i = 0; i<n; i++){
        for(int s1 = 0; s1<(n-i-1); s1++){
            cout << " ";
        }
        for(int p = 0; p<2*i+1; p++){
            cout<<"*";
        }
        for(int s2 = 0; s2<(n-i-1); s2++){
            cout << " ";
        }
        cout<<endl;
    }
}
void reverse_pyramid(int n){
    for(int i = 0; i<n; i++){
        for(int s1 = 0; s1<i; s1++){
            cout << " ";
        }
        for(int p = 0; p<2*n-(2*i+1); p++){
            cout<<"*";
        }
        for(int s2 = 0; s2<i; s2++){
            cout << " ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    straight_pyramid(n);
    reverse_pyramid(n);
    return 0;
}