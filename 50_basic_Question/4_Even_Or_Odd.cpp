#include<bits/stdc++.h>
using namespace std;

// 1. Using Modulus Operator
bool even_or_odd_modulo(int n){
    return (n%2==0);
}

// 2. Using Bitwise AND Operator
int even_odd_bitwise_and(int n){
    if(n & 1){
        cout<<n<<" is Odd";
    }
    else{
        cout<<n<<" is Even";
    }
}

// 3. Using Division
int even_odd_division(int n){
    if((n/2)*2 == n){
        cout<<n<<" is Even";
    }else{
        cout<<n<<" is Odd";
    }
}

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    bool result = even_or_odd_modulo(n);
    (result) ? cout<<n<<" is Even" : cout<<n<<" is Odd";
    cout<<endl;
    even_odd_bitwise_and(n);
    cout<<endl;
    even_odd_division(n);
    return 0;
}