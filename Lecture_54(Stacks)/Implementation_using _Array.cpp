#include<iostream>
#include<stack>
using namespace std;

class Stack {

public:
int top;
int *arr;
int size;


Stack(int size)
{
    this->size=size;
    arr=new int[size];
     top = -1;
}

void push(int element)
{
    if(size-top>1)
    {
        top++;
        arr[top]=element;
    }
    else{
        cout<<"stack overflow"<<endl;
    }
}


void pop()
{
    if(top>=0)
    top--;

    else{
        cout<<"Stack underflow"<<endl;
    }
}

int peek(){
    if(top>=0)
    return arr[top];

    else
    cout<<"Stack empty"<<endl;
    return -1;
}

bool isEmpty(){
    if(top==-1)
    return true;

    else 
    return false;
}
};




int main()
{

Stack s1(5);
s1.push(2);
s1.push(1);
s1.push(3);

cout<<s1.peek()<<" "<<endl;
s1.pop();
cout<<s1.peek()<<" "<<endl;
s1.pop();
cout<<s1.peek()<<" "<<endl;
s1.pop();
cout<<s1.peek()<<" "<<endl;

    /*
stack<int>s;
s.push(3);
s.push(4);
s.push(5);
s.push(6);

cout<<s.top() << " ";
s.pop();
cout<<s.top() << " "<<endl;


if(s.empty())
{
cout<<"Stack is empty "<<endl;
}
else{
    cout<<"Stack is not empty " << endl;
}


*/

return 0;
}