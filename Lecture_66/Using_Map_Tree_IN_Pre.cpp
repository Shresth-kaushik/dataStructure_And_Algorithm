//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){=
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
private:

// int findposition(int in[],int element,int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(in[i]==element)
//         return i;
//     }
//     return -1;
// }



 void creatmapping(int in[],map<int,int>&nodeToindex,int n)
{
    for(int i=0;i<n;i++)
    {
      nodeToindex[in[i]]=i;
    }
}


Node* solve(int in[],int pre[],int &index,int inorderStart,int inorderEnd,int n,map<int,int>&nodeToindex)
{
    // base case:
    // Preorder ka index array se bhar chala jaye:
    if(index >= n || inorderStart > inorderEnd)
    return NULL;
    
    // ELement nikal lo from preorder :
    int element =pre[index++];
    Node*root= new Node(element);
    
    int position=nodeToindex[element];
    
    // find the position of the nikala hyue element in inorder:
    // int position=findposition(in,element,n);
    
    
    // REcurssive calls :
    root->left = solve(in,pre,index,inorderStart,position-1,n,nodeToindex);
    root->right = solve(in,pre,index,position+1,inorderEnd,n,nodeToindex);
    
    return root;
    
}
    
    public:
    Node* buildTree(int in[],int pre[], int n)
    {
     int preorderIndex=0;
     map<int,int>nodeToindex;
     
     creatmapping(in,nodeToindex, n);
    Node*ans= solve(in,pre,preorderIndex,0,n-1,n,nodeToindex);
    //   0=> inorder starting index :
    // n-1 => ending index of the inorder;
    return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends