#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}


// i = 0 --> j = 0,1,2,3
// i = 0 --> j = 0,1,2,3
// i = 0 --> j = 0,1,2,3
// i = 0 --> j = 0,1,2,3