#include<iostream>
using namespace std;

int* solve(){
    int a = 5;
    // a = 5;
    int* ptr = &a;

    return ptr;
}

int main(){

    // int a = 5;
    // int *ptr = &a;
    // cout<<"Address of a :"<<endl;
    // cout<<&a<<endl;

    //printimg the address of a
    // cout<<ptr<<endl; 
    // printing the value of ptr
    // cout<<*ptr<<endl;
    // printing the address of pointer ptr
    // cout<<&ptr<<endl;


    // #Array concepts with pointers
    // int arr[10];

    // cout<<arr<<endl;    //printing the base address
    // cout<<&arr<<endl;   //it's printing the address of arr
    // cout<<arr[0]<<endl;  //it's the value arr at index 0
    // cout<<&arr[0]<<endl;  //it'sthe printing the address oh arr at index 0  which is also a base addrress


    //  int arr[5] = {1,2,3,4,5};
    //  int i=0;
    //  while(i<5){
    //     cout<<i[arr]<<" ";    //Something Unique
    //     i++;
    //  }
     int arr[5] = {2,4,6,8,10};
    //  int* p = &arr[];    //you can't make pointer of an array which initialize
    //  cout<<*p;
   
    int a = 5;
    // int *ptr = &a;
    cout<<&a<<endl;  //address -> 0x61fef8
    cout<<solve()<<endl;  //this function uses local variables so its address is different.
    cout<<&a;  //same address -> 0x61fef8

    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<*ptr<<endl;
   

    return 0;
}