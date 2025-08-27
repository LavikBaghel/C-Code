#include<iostream>
using namespace std;

int main(){

//    const int a = 5;
    // a = 7;   //Initialization can be done but no modification is allowed
//     cout<<a<<endl;
    

    //2. Const with pointers
//    const int *a = new int(2);  //const data, Non-Const pointer
// // int const *a = new int(2);  //Another way to write line no. 12
//    cout<<*a<<endl;
////  *a = 22;  //Can't change the content of pointer
//     delete a;
    
//     int b = 5;
//     a = &b;    //Pointer itself can be reassigned
//     cout<<*a<<endl;


    //3. Const pointer, Non-Const data
    // int *const a = new int(2);
    // cout<<*a<<endl;
    // *a = 20;//chal jayega
    // cout<<*a<<endl;
    // int b = 50;
    // a = &b; //nahi chlega, const pointer
    

    //Const pointer, Const data
    // const int *const a = new int(10);
    // cout<< *a << endl;
    // *a = 50;
    // int b = 100;
    // a = &b;

    return 0;
}