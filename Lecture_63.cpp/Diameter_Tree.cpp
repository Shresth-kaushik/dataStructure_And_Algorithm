// FUNCTION only to find the Diameter of the tree :


// int dia = 0 ;
//    int solve(Node* root)
//    {
//        if(root == NULL)
//        return 0 ;
//        int left = solve(root->left) ; 
//        int right = solve(root->right) ;
//        dia = max(dia , left+right+1) ;
//        return 1+ max(left , right) ; 
//    }


//     int diameter(Node* root) {
//         solve(root) ;
//         return dia ;
//     }



//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// T.C == O(n);  

class Solution {
    
// private:
// int height(Node*root)
// {
//     if(root==NULL)
//     return 0;
    
//   int leftpart=  height(root->left);
//   int rightpart = height(root->right);
  
//   int ans=max(leftpart,rightpart) +1;
//   return ans;
// }


  public:
//   pair ka first part mai diameter and second mai height:
  
  pair<int,int>diameterfast(Node*root)
  {
      if(root==NULL){
          pair<int,int>p = make_pair(0,0);
        return p;
      }
      
      pair<int,int>left=diameterfast(root->left);
      pair<int,int>right=diameterfast(root->right);    
      
        int a=left.first;
        int b=right.first;
        int c=left.second + right.second +1;
        
        pair<int,int>ans;
        ans.first=max(a,max(b,c));
        // heigth : 
        ans.second=max( left.second , right.second )+1;
        return ans;
  }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) 
    {
     return  diameterfast(root).first;
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/
int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        string s;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        cout << ob.diameter(root) << endl;
    }
    return 0;
}

// } Driver Code Ends