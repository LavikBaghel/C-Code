#include<iostream>
using namespace std;

int ekoSpoj(int arr[], int size, int sawblade){
    int total = 0;
    int ans = -1;
    

    for(int i=1;i<20;i++){
        for(int j=0;j<size;j++){
            if(arr[j] >= i){
                total += arr[j] - i;
                
            }
        }
         if(total >=sawblade){
            // ans = total;
            
            total = arr[i];
            ans = i;
            // break;
           
        }
        else{
            break;
        }
        
        // else{
        //     // return ans;
        //     break;
        // }
    }
    return ans;
}

int main(){

    int arr[] = {20,15,10,17};
    int size = sizeof(arr)/sizeof(int);
    int sawblade = 7;
    
    cout<<ekoSpoj(arr,size,sawblade);
     

    return 0;
}