#include<iostream>
using namespace std;
#define ull unsigned long long 
 

int main(){

    int n;
    cin>>n;
     ull factorial = 1;
    for(ull i=1;i<=n;i++){
      factorial = i * factorial;
    }
    cout<<factorial;
    return 0;
}