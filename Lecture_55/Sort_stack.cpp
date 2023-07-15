//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/







// ------------------------------------->>>>>>> CODE WE WRITE <<<<<<<<<<<<------------------------------------




/* The below method sorts the stack s 
you are required to complete the below method */

void InsertAtBottom(stack<int>&s,int num)
{
    // base condition
    if(s.empty() || !s.empty() &&  s.top() <= num){
        s.push(num);
        return;
    }
    int n=s.top();
    s.pop();
    
    // recurssive call :
    InsertAtBottom(s,num);
    
    // returning time pe vapis la kar chlo enko :
    s.push(n);
    
}



void SortedStack :: sort()
{
       // base case :
   if(s.empty())
   return ;
   
    int num=s.top();
    s.pop();
    
    // recussive call :
    sort();
    
    InsertAtBottom(s,num);
    
   
}