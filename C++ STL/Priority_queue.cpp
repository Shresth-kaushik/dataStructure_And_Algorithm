#include<iostream>
#include<queue>
using namespace std;

// Here we are creating the template  class so that we can display
// any data type 

template<class T>
// void display(priority_queue<int >  q)
void display(priority_queue<T>  q)
{
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}

// different display 
void display(priority_queue< char , vector<char>,greater<char> >q)
{
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main()
{

priority_queue<int>q1;
for(int i=1;i<=10;i++)
q1.push(i);
display(q1);
display(q1);


priority_queue<string>q2;
q2.push("ab");
q2.push("ad");
q2.push("af");
q2.push("ac");
q2.push("ae");
q2.push("AA");
// Arranged in the laxigoraphical order :
display(q2);
q2.pop();
display(q2);

// Data type must be same in all parameters :

// MIN Heap ki traha act kara ga :
priority_queue< char , vector<char>,greater<char> > q4;
q4.push('a');
q4.push('n');
q4.push('g');
q4.push('v');
display(q4);

    return 0;
}