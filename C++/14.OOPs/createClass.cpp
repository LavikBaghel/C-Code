#include<iostream>
using namespace std;

class Animal{
   public: 
    int age;
    string name;

   void eat(){
    cout<<"Eating"<<endl;
   }
   void sleep(){
    cout<<"Sleeping";
   }
};

int main(){
    
    // Animal octoloco;

    // octoloco.age = 10;
    // octoloco.name = "Tiger";

    // cout<< octoloco.age<<endl;
    // cout<< octoloco.name<<endl;

    // octoloco.eat();
    // octoloco.sleep();


    //Dynamically creating objects
    
    Animal* obj = new Animal;
    (*obj).age = 10;
    obj->name = "Object";           //alternate way 
    cout<<(*obj).age<<endl;
    cout<<obj->name<<endl;
     

    return 0;
}

