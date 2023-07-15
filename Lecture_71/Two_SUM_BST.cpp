#include <iostream> 
#include<vector>
// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
    
};
***************/




void Inorder(BinaryTreeNode<int>*root,vector<int>&in)
{
    if(root==NULL)
   return;

    in(root->left,in);
    in.push_back(root->data);
    in(root->right,in);
}


bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	//Write your code here
 vector<int>inorderValue;
 Inorder(root,inorderValue);

int i=0;
int j=inorderValue.size()-1;

while(i<j)
{
    int sum =inorderValue[i] + inorderValue[j];

    if(sum==target)
    return true;

  else if(sum > target)
  j--;
  else
  i--;
}
return false;
}