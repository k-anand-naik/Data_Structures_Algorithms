#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int n;
  cin>>n;
  for(int i = 0; i<n; i++){
    for(int j = n-1; j>=i; j--){
      cout<<"* ";
    }
    cout<<endl;
  }
  return 0;
}


// i = 0 --> j = 0,1,2,3
// i = 0 --> j = 0,1,2
// i = 0 --> j = 0,1
// i = 0 --> j = 0
