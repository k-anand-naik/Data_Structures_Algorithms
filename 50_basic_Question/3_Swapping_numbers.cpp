#include<bits/stdc++.h>
using namespace std;

void swappingNumbers(int &a, int &b){
    int temp=a;
    a = b;
    b = temp;
    cout<<a<<" "<<b; 
}

void swappingNumbersWithoutTemp(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<a<<" "<<b;
}

int main(){
    int a = 5, b = 10;
    cout<<"Before swapping: "<<a<<" "<<b<<endl;
    cout<<"After swapping: ";
    swappingNumbers(a, b);
    cout<<endl;
    swappingNumbersWithoutTemp(a, b);
}