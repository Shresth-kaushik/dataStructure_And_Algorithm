/*

There are two methods to reverse the queue :
1. stacks 
2. Recurssion

*/

// Stack :
//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
queue<int> rev(queue<int> q);
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    queue<int> a=rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}
// } Driver Code Ends


//function Template for C++

//Function to reverse the queue.
queue<int> rev(queue<int> q)
{
    // Push the elements in the stacks after poping from queue:

    stack<int>s;
    while(!q.empty()){
        int ans = q.front();
        q.pop();
        s.push(ans);
    }
    
//   Again pushing the elements to the queue from stack;
    while(!s.empty())
    {
        int element=s.top();
        s.pop();
        q.push(element);
    }
    return q;
    
}








// --------------------------->>>>>    USing Recurssion   <<<<<<-------------------------------------------

/*

Pseudo code::

queue reverseFunction(queue)
{
    if (queue is empty)
       return queue;

    else {
       data = queue.front()
       queue.pop()
       queue = reverseFunction(queue);
       q.push(data);
       return queue;
    }
}


FUNCTION ::

void reverseQueue(queue<int>& q)
{
    // Base case
    if (q.empty())
        return;
 
    // Dequeue current item (from front) 
    long long int data = q.front();
    q.pop();
 
    // Reverse remaining queue 
    reverseQueue(q);
 
    // Enqueue current item (to rear) 
    q.push(data);
}
 
TIME COMPLEXITY and SPACE COMPLEXITY  BOTH :  O(n)


*/

