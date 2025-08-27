#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

vector<bool> Seive(int n){
    // create a sieve array of N size telling isprime
    vector<bool>sieve(n+1, true);
    sieve[0] = sieve[1] = false;

    for(int i=2;i*i<=n;i++){
       if(sieve[i] == true){
        // int j = i*2;
        int j = i* i; //optimisation

        while(j<=n){
            sieve[j] = false;
            j+= i;
        }  
  
       }
    }
    return sieve;
}

vector<bool> segSeive(int L, int R){
    //get me prime array,i wil use it to mark segmented seive

    vector<bool>sieve = Seive(sqrt(R)); 
    vector<int>basePrimes;
    for(int i=0;i<sieve.size();i++){
        if(sieve[i]){
            basePrimes.push_back(i);
        }
    }
    vector<bool>segSieve(R-L+1, true);
    if(L == 1 || L == 0){
        segSieve[L] = false;
    }
    for(auto prime:basePrimes){
        int first_mul = (L / prime) * prime;
        if(first_mul < L){
          first_mul += prime;
        }
        
        int j = max(first_mul, prime*prime);
        while(j <= R){
            segSieve[j - L] = false;
            j += prime;
        }
    }
    return segSieve;
}

int main(){

    int L = 110;
    int R = 130;
    vector<bool>ss  = segSeive(L,R);
    for(int i=0;i<ss.size();i++){
        if(ss[i]){

            cout<<i + L<<" ";
        }
    }

    return 0;
}