#include<iostream>
// #include "Hero.cpp";
using namespace std;

class Hero{

private:  
    int power;
public:    
    char level;
    int health;

// Getter 
int getpower(){
    return power;
}
int getlevel(){
    return level;
}
//Setter
void setpower(int p ) {
    power=p;
}
void setlevel(int l){
level=l;
}

};

int main (){
/*

// Creating the Object ;
// Static Allocation hai :
Hero ramesh;

// char size==1 + size of the int =4  ans must come is 5 BUT ANS IS '8' . Why??

// Padding Concept used hain emai;
// Greedly alignment:

cout<<"Size of the h1  "<<sizeof(ramesh)<<endl;

// cout<<"level is   "<<  ramesh.level<<endl;
cout<<"Health is  "<<  ramesh.health<<endl;



// Define in the private class so we cannot excess this outside of the class
// cout<<"Name is"<< h1.power<<endl;
// SO WE can excess the private class using the getter and setter functions;

cout<<"The Power is "<< ramesh.getpower() <<endl;
ramesh.setpower(50);

cout<<"THe Power after setter is " <<ramesh.getpower()<<endl; 


*/
// Dynamic Allocation 

Hero *h1= new Hero ;
h1->setpower(30);
cout<<"The Power is " << (*h1).getpower() <<endl;
cout<<"The Health is " << h1->health <<endl;
h1->setlevel(50);
cout<<"The level is "<<(*h1).getlevel()<<endl;
    return 0;
}