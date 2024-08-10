#include<bits/stdc++.h>
using namespace std;

void inverted_number_RAT(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i; j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    inverted_number_RAT(n);
}

// at i --> print n-i times the * of number with logic

// i = 0 --> j = n-0 patterns 
// i = 1 --> j = n-1 patterns
// i = 2 --> j = n-2 patterns
// i = 3 --> j = n-3 patterns

// for n = 4
// i = 0 --> j = n-0 patterns --> 4-0 stars
// i = 1 --> j = n-1 patterns --> 4-1 stars
// i = 2 --> j = n-2 patterns --> 4-2 stars
// i = 3 --> j = n-3 patterns --> 4-3 stars


