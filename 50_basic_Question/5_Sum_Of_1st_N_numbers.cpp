#include<bits/stdc++.h>
using namespace std;

// 1. Using formula
int sum_of_n_Numbers_formula(int n){
    return (n*(n+1)/2);
}


// Using array of n integers from 1.
int sum_of_n_numbers_array(int n){
    int sum = 0;
    for(int i = 1; i<=n; i++){
        sum += i;
    }
    return sum;
}

int sum_of_n_numbers_recursion(int n){
    if(n == 0){
        return 0;
    }else{
        return n + sum_of_n_numbers_recursion(n-1);
    }
}
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int sum_formula = sum_of_n_Numbers_formula(n);
    cout<<sum_formula<<endl;
    int sum_array = sum_of_n_numbers_array(n);
    cout<<sum_array<<endl;
    int sum_recursion = sum_of_n_numbers_recursion(n);
    cout<<sum_recursion<<endl;
    return 0; 
}