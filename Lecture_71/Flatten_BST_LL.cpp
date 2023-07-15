#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

void Inorder(TreeNode*root,vector<int>&in)
{
    if(root==NULL)
    return;
    
    in(root->left,in);
    in.push_back(root->data);
    in(root->right,in);

}

TreeNode<int>* flatten(TreeNode<int>* root)
{
    vector<int>inorderValue;
    Inorder(root,inorderValue);

   int n=inorder.size();
   
//    Create the new node :
 TreeNode<int>*newRoot=new TreeNode<int>(inorderValue[0]);

 TreeNode<int>*curr=newRoot;

//  Second step:Sari node except last node => left pointer null kardo and right ko next pe point karwa do:
for (int i = 1; i < n; i++)
{
   TreeNode*<int>temp= new TreeNode<int>(inorderValue[i]);

   curr->left==NULL;
   curr->right=temp;
   curr=temp;
}

// 3rd step :
//  Last node ka dono left and right pointer null karo :
curr->left=NULL;
curr->right=NULL;

return newRoot;
}
