#include<iostream>
#include <cstring>
using namespace std;

bool find(int arr[], int size, int key){
    // Linear Search                                                                       
    for(int i=0;i<size;i++){
        if(arr[i] == key)
        return true;
    }
    

    // not present
    return false;
}
int main(){

//    int arr[5];
//    for(int i=0;i<5;i++){
//     cout<<"enter value: ";
//     cin>>arr[i];
//    }
//    for(int i=0;i<5;i++){
//     cout<<2*arr[i]<<endl;
//    }
     

    // int arr[] = {2,3,4,5,6};
 
    //The memset() function takes three arguments: dest, ch and count. The character represented by ch is first converted to unsigned char and then copies it into the first count characters of the object pointed to by dest.
    // int dest[0];
    // int one = 1;                     
    // memset(dest, one, 20);

    
    // for(int i=0;i<5;i++){
    //     arr[i] = 1;
       
    // }
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
       
    // }

    int arr[6] = {2,5,7,9,3,6};
    int size = 5;

    int key;
    cout<<"Enter the no. you want to find in array: ";
    cin>>key;

    if(find(arr,size,key)){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Not Present";
    }
    
    return 0;
}