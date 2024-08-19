#include<bits/stdc++.h>
using namespace std;

void reverse_number_using_array(int n){
    int digits[10], i = 0;

    while(n != 0){
        digits[i++] = n % 10;
        n /= 10;
    }

    cout<<"Reversed digits :";
    for(int j = 0; j<i; j++){
        cout<<digits[j];
    }
    cout<<endl;
}

void reverse_number_using_maths(int n){
    int reverse_number = 0;
    while( n != 0 ){
        reverse_number = (reverse_number * 10) + (n%10);
        n /= 10;
    }
    cout<<"Reverse number : "<<reverse_number;
    cout<<endl;
}

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    reverse_number_using_array(num);
    reverse_number_using_maths(num);
}