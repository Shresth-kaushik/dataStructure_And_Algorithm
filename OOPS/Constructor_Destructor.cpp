/* Ques 1 . 

#include<iostream>
using namespace std;
class A{
private:
A(){
    cout<<"Default constructor"<<endl;
}
public:
int a;
A(int a){
    //  this is a pointer ,always points to the object for which the method is called ;
 this->a=a;
}

};

int main()
{
A a(10);
cout<<a.a<<endl;
return 0;
}
*/




// Ques : 2 . --> Find the output of the ques ? 
// ---> Destructors are called in the reverse order of the constructor <---- 
/*
#include<iostream>
using namespace std;
class myclass{
int a;
public:
myclass(int x){
    a=x;
    cout<<"Constructor "<<a<<endl;
}
~myclass(){
    cout<<"Destructor "<<a<<endl;
}

};
int main()
{
myclass obj1(1),obj2(2),obj3(3);
return 0;

}
*/

#include<iostream>
using namespace std;
class myclass{
int a;
public:
myclass(int x){
    a=x;
    cout<<"Constructor "<<a<<endl;
}
~myclass(){
    cout<<"Destructor "<<a<<endl;
}

};
// yah class se bhar hai : 
void myfun(int x){
//   if use static in myclass obj1(x);
 myclass obj1(x);
}

int main()
{
myclass obj1(1),obj2(2),obj3(3);
myfun(4);
myfun(5);
myfun(6);
return 0;

}

