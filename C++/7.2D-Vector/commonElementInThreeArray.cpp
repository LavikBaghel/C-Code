#include<iostream>
using namespace std;

int main(){

  int  ar1[] = {1, 5, 10, 20, 40, 80};
  int  ar2[] = {6, 7, 20, 80, 100}; 
  int  ar3[] = {3, 4, 15, 20, 30, 70, 80, 20}; 

  for(int i =0;i<6;i++){
    int element1  = ar1[i];
    for(int j=0;j<5;j++){
        int element2  = ar2[j];
        for(int k=0;k<8;k++){
             int element3  = ar3[k];

         if(element1 == element2){
            if( element2 == element3){
                  cout<<element3<<" ";
                   break;
            }
            
         }
        } 
    }
  }

    return 0;
}