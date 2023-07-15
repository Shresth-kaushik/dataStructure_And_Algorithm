#include<iostream>
#include<queue>
using namespace std;
int main()
{
queue<int>q;
q.push(12);
q.push(13);
q.push(14);
q.push(15);

cout<<"The size of the queue "<<q.size()<<endl;
cout<<"THe front element= "<<q.front()<<endl;

q.pop();
q.pop();


cout<<"The size of the queue "<<q.size()<<endl;
cout<<"THe front element= "<<q.front()<<endl;

if(q.empty()){
    cout<<"The queue is empty "<<endl;
}
else 
cout<<"The queue is not empty "<<endl;


return 0;

}