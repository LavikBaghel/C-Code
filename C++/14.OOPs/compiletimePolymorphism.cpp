#include<iostream>
using namespace std;

class animal{
      public :
    virtual void speak(){    //NOTE:- Here virtual keyword decide the output on runtime -----> if you don't use virtual keyword then it shows the output of pointer variable and if use virtual keyword then it's shows the output of object variable
        cout<<"Speaking"<<endl;
      }      
};

class dog : public animal{
    public :
    //method overriding
      void speak(){
        cout<<"Barking"<<endl;
      }
};

int main(){

//   animal a;
//   a.speak();    //animal class called
//   dog d;
//   d.speak;      //dog class called

//    Dynamic Binding (Dynamically object creation)
  
    // 1. 
    // animal* a = new animal();
    // a->speak();

    // 2. UpCasting
    // animal* a = new dog();        //always first
    // a->speak();

    // 3.DownCasting
    dog* d = (dog*)new animal();
    d->speak();

    return 0;
}