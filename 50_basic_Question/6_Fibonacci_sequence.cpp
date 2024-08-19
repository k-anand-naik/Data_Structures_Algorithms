#include<bits/stdc++.h>
using namespace std;

int fibonacci_series(int n){
    if(n<=1){
        return n;
    }else{
        return fibonacci_series(n-1)+fibonacci_series(n-2);
    }
}

int* fibonacci_array(int n){
    int* fibArray = new int[n];

    // Handled the base cases
    if(n > 0) fibArray[0] = 0;
    if(n > 0) fibArray[1] = 1;

    for(int i = 2; i<n; i++){
        fibArray[i] = fibArray[i-1]+fibArray[i-2];
    }

    return fibArray;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i = 0; i<n; i++){
        cout<<fibonacci_series(i)<<" ";
    }

    cout<<endl;

    int* fibSeries = fibonacci_array(n);
    for(int i = 0; i<n; i++){
        cout<<fibSeries[i]<<" ";
    }
    cout<<endl;
    delete[] fibSeries;
    return 0;
}