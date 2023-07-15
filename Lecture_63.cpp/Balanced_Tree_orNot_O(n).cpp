// Here is the optimized approach which shows the tree is balanced or not T.C = O(n);



// Time Complexity: O(n) 
// Auxiliary Space: O(n)


class Solution{

    
    private:
    pair<bool,int>isOptimized(Node*node)
    {
        // base case :
        if(node==NULL)
        {
            pair<bool,int>p=make_pair(true,0);
            return p;
        }
        
    pair<bool,int> left=isOptimized(node->left);
    pair<bool,int> right=isOptimized(node->right);
    
    
    bool leftans=left.first;
    bool rightans=right.first;
    
    bool diff=abs(left.second  -  right.second) <=1;
    
    pair<bool,int >ans;
        ans.second=max(left.second ,right.second)+1;
    
    // ans ka bool mai. result Either True when the all three condition are true or else false:
    if(leftans && rightans && diff)
    {
        ans.first=true;
    }
    else
    {
        ans.first=false;
    }
    
   
  return ans;
    }  



    public:
    bool isBalanced(Node *root)
    {
        bool ans=isOptimized(root).first;
       return ans;
    }
};