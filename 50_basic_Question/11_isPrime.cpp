#include<bits/stdc++.h>
using namespace std;

void is_prime(int n){
    bool isPrime = true;
    if(n <= 1){
        cout<<"Not a Prime Number!";
    }
    else{
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                isPrime = false;
                break;
            }
        }
    }
    (isPrime) ? cout<<n<<" is Prime number" : cout<<n<<" is not Prime number";
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    is_prime(num);
    return 0;
}