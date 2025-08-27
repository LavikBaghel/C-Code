#include<iostream>
#include<vector>
using namespace std;

  int countPrimes(int n) {
        
    if(n==0) return 0;

    vector<bool> prime(n, true); //all are prime marked already
    prime[0] = prime[1] = false;

    int ans = 0;

    for(int i=2;i<n;i++){  //not so optimise way
    //  for(int i=2;i*i<=n;i++){ //Optimisation 2 - > On Outer Loop
        if(prime[i]){
            ans++;

            // int j= i*2; //not so optimise

            int j = i * i;  //Optimisation 1 -> On Inner Loop
             //first unmarked number would be i*i, as others have been marked by 2 to (i - 1)
            while(j<n){
                prime[j] = false;
                j += i;
            }
        }
    }
       return ans;  
    }

int main(){

    int n;
    cout<<"enter the number"<<endl;
    cin>>n;

    cout<<countPrimes(n);

    return 0;
}