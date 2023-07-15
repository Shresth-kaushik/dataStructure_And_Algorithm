/*
Ques 1.
#include<iostream>
using namespace std;
class A{  
    // by defalut the members are the "private"  so main fuunction can not access the private member of the
    //  class 
    public:
int a;
void modify_a(int x){
    a=x;
}
};

int main()
{
A a;
a.modify_a(10);
cout<<a.a<<endl;
return 0;
}
*/

/*

#include<iostream>
using namespace std;
class A{
public:
    int a,b;
    A(int a,int b){
        this->a=a;
        this->b=b;
    }
    int getsum(){
        return(a+b);
    }

};
int main()
{
A obj1(3,7);
A *ptr;
ptr=&obj1;
// Error If we do not use the bracket with the ptr ---> eg. (*ptr.a) is the wrong one ;
// (*ptr).a=5;
ptr->a=5;
cout<<obj1.getsum()<<endl;
return 0;

}
*/
/*
#include<iostream>
using namespace std;

class A{
int a;
// friend void modify(A ob);
friend void modify(A &ob);

public:
A(){
    a=5;
}
void get(){
    cout<<a<<endl;
}
};
// void modify(A ob)
void modify(A &ob){
    ob.a+=13;
}
int main()
{
A obj;
obj.get();
modify(obj);
obj.get();
return 0;
}
*/

// IMPORTANT hai :->
#include <iostream>
using namespace std;
class A{
public:
       static int a;
       static void increment(){
        a+=3;
       }
int get(A obj){
    return (a+obj.a);
}

};
int A::a=10;
int main()
{
A obj1,obj2,obj3;
obj1.increment();
obj2.increment();
cout<<obj2.get(obj1)<<endl;
return 0;
}