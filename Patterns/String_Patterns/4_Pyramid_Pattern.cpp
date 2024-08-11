#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    char letter = 'A';
    for(int i = 0; i<n; i++){
        // spaces
        for(int s1 = 0; s1<n-i-1; s1++){
            cout<<" ";
        }
        int middle = i;
        for(int p = 0; p<2*i+1; p++){
            cout<<letter<<" ";
            // if(p<(2*i+1)/2){
            if(p<middle){
                letter++;
            }else{
                letter--;
            }
        }
        for(int s2 = 0; s2<n-i-1; s2++){
            cout<<" ";
        }
        cout<<endl;
        letter = 'A';
    }
}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern(n);
    return 0;
}