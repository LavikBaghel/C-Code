#include<iostream>
#include<string.h>
using namespace std;

bool palidrome(char ch[]){

     int size = strlen(ch)-1;
     int i=0;
     while(i <= size){
        if(ch[i] == ch[size]){
            return true;
        }
        else{
            return false;
        }
        i++;
        size--;
     }
     return -1;
     
}

void convertIntoUpperCase(char ch[]){
    int size = strlen(ch)-1;
    for(int i=0;i<size;i++){
       ch[i] =  ch[i] - 'a' + 'A';
    }
    
}

int main(){
    //Character part
    char ch[100];
    // for(int i=0;i<10;i++){
    //      cin>>ch[i];
    // }
        // cin>>ch;
        // cout<<ch;
       cin.getline(ch, 100);

    //    cout<<ch;
    //    cout<<strlen(ch);

    //    int i = 0;
    //    int j = strlen(ch);

    //    Reverse a string
    //    while(i <= j){
    //     if(i>j)break;
    //     else{
    //   swap(ch[i], ch[j]);
    //       i++;
    //       j--;
    //     }
          
    //    }
    // while(i != j){
    //     char space = '32';
    //     char atRate  = '64';
    //     if(ch[i] == space){
    //         cout<<atRate;
    //     }
       
    //     i++;
        
    // }

//    space into @ sign

    // for(int i=0;i<j;i++){
    //     if(ch[i] == ' '){
    //         ch[i] = '@';
    //     }
    // }
    // cout<<ch;


  
        // if(palidrome(ch)){
        //     cout<<"true";
        // }
        // else{
        //     cout<<"False";
        // }
        

         char c = 'A'; 
       cout << "The ASCII value of " << c << " is " << int(c); 
   
          convertIntoUpperCase(ch);
          cout<<ch;

    return 0;
}