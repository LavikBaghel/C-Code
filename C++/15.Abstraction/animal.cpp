#include<iostream>
#include "animal.h";
using namespace std;

void animalDoesSomething(Animal *&animal){
    animal->eat();
    animal->walk();
    animal->eat();
}

int main(){
    Animal* abc = new Lion();
    animalDoesSomething(abc);

    Animal* xyz = new Tiger();
    animalDoesSomething(xyz);
}