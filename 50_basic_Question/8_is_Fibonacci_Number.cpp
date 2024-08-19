#include<bits/stdc++.h>
using namespace std;

bool isFibonacci(int n){
    if (n <= 1) return true;
    int t1 = 0, t2 = 1;
    while (t2 < n) {
        int next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    return t2 == n;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    (isFibonacci(n)) ? cout<<n<<" is fibonacci" : cout<<n<<" is not fibonacci";
    return 0;
}