#if !defined(Animal_H)
#define Animal_H;
#include<iostream>
using namespace std;


class Animal{
   public:
   virtual void eat() = 0;
   virtual void walk() = 0;
};

class Lion: public Animal{
    public:
    void eat(){
        cout<<"Lion is eating"<<endl;
    }

    void walk(){
        cout<<"Lion is walking"<<endl;
    }
};


class Tiger: public Animal{
    public:
    void eat(){
        cout<<"Tiger is eating"<<endl;
    }

    void walk(){
        cout<<"Tiger is walking"<<endl;
    }
};

#endif
