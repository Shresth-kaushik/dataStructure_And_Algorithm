//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
#include<vector>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


// WE have to write JUst the function to check whether the ll is palindome or not:

class Solution{
private:
bool checkpalindrome(vector<int>arr)
{
    int n=arr.size();
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if(arr[s]!=arr[e])
       { return 0;}

        s++;
        e--;
    }
    return ;
}

  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
       vector<int>arr;
       Node*temp=head;
// copying the elements of the LL in the array;
       while(temp!=NULL)
       {
            arr.push_back(temp->data);
            temp=temp->next;
       }

      return checkpalindrome(arr);
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends