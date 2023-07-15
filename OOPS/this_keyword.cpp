#include<iostream>
using namespace std;
class Hero{
    public:
    char level;
    int health;

    // Non-parametrized constructor;     Default constructor
    Hero(){
        cout<<"Constructor called"<<endl;
    }

    // Parametrized constructor :
    Hero(int health){
        cout<<" Address .... this ->"<<this<<endl;
        this->health=health;
    }

};

int main()
{
Hero ramesh(10);
cout<<"Address of the object ramesh "<<&ramesh<<endl;
 cout<<ramesh.health<<endl;


return 0;
}


// this keyword contains the address of the recent object 
// this->...... we can excess the parameters of the class ;