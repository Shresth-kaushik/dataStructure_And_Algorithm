#include<iostream>
#include<queue>
using namespace std;
class node
{
public:
    int data;
    node*left;
    node*right;

node(int d)
{
    this->data=d;
    this->right=NULL;
    this->left=NULL;

}
};

//     ------------------------>>>  INSERTION  FUNCTION  <<<<--------------------
// TIME COMPLEXITY => O(log(n))
node* InsertIntoBST(node*root,int d)
{
    // base case:
    if(root==NULL)
   {
    // Make new node
    root = new node(d);
    return root;
   }

   if(root->data < d)
   //Right part mai insert karo :
    root->right = InsertIntoBST(root->right,d);

   else{
  //Left part mai insert karo :
    root->left=InsertIntoBST(root->left,d);
   }
   return root;
}

//               ---------------->>>> TAKE INPUT FOR THE TREE <<<<-------------

void TakeInput(node* &root)
{
 int data ;
 cin>>data;

 while(data!=-1)
{
    root=InsertIntoBST(root,data);
    cin>>data;
}
}



// -------------------->> LEVEL ORDER TRAVERASAL <<-----------------

void levelOrderTraversal(node *root)
{
    // INitally push the root node to the queue:
    queue<node*>q;
    q.push(root);
    q.push(NULL);

while(!q.empty())
{ 
    node*temp=q.front();

    q.pop();
    if(temp==NULL)
    { 
        // Purana level is completed :
        cout<<endl;
        if(!q.empty())
        {
            q.push(NULL);
        }
    }
    else
    {
        cout<<temp->data<<" ";

        if(temp->left)
        q.push(temp->left);

        if(temp->right)
        q.push(temp->right);
    }
}
}



// ------------------------------>>>>>  SEARCHING IN THE BST  <<<<-------------------------
// T.C => O(log n);

bool search(node* root, int x) {
//   base case:
if(root==NULL)
return false;

if(root->data == x)
return true;

// left part mai search karo :
if(root->data > x)
return search(root->left,x);

else
return search(root->right,x);

}



// ------------>>> FIND THE MAXIMUM VALUE IN THE BST <<<---------
node* minvalue(node*root)
{
    node*temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
}


// --------------->>> MAXIMUM VALUE IN THE BST <<<----------------
node* maxvalue(node*root)
{
    node*temp=root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp;
}



// ------------------------->> IMPORTANT HAI >> <<---------------------
// ---------------------->> DELETION FROM BST <<<----------------------

// --------->>  T.C=>O(height) Aveerage case :  Worst case  O(n) <<<<----------

node*miniValue(node*root)
{
    node*temp=root;
    while(temp!=NULL)
    temp=temp->left;

    return temp;
}


node*deleteFromBST(node*root,int value)
{
    // base case:
    if(root==NULL)
    return root;

    if(root->data==value)
    {
        //  Esmai 3 case ho skta hain :
        // 0 child 
       if(root->left==NULL && root->right==NULL)
       {
        delete root;
        return NULL;
       }

        // 1 child 
    // Agar left child present hai :
    if(root->left!=NULL && root->right==NULL)
    {
        node*temp=root->left;
        delete root;
        return temp;
    }
    // Agar right child present hai then : 
    if(root->right!=NULL && root->left==NULL)
    {
        node*temp=root->right;
        delete root;
        return temp;
    }

        // 2 child

        if(root->left!=NULL && root->right!=NULL)
        {
            //  HMra pass 2 option hai 
            // 1. ya toh left mai se maximum value nikal lo 
            // 2. Or nahi toh right subtree  main se minimum value nikal lo:

            int mini=miniValue(root->right)->data;
            root->data=mini;
            // value replace karna ka baad we have to call function to for mini data to delete:
            root->right=deleteFromBST(root->right,mini);
        }
    }

    else if(root->data > value)
    {
        // Left part mai hai choti value:
        root->left=deleteFromBST(root->left,value);
        return root;
    }
    else 
    {
    // right part mai search karo :
    root->right=deleteFromBST(root->right,value);
        return root;
    }
}


int main()
{

node*root=NULL;
cout<<"Enter the data to create BST "<<" "<<endl;
TakeInput(root);

cout<<"Printing the BST"<<endl;
levelOrderTraversal(root);

cout<<endl;

cout<<"Minimum value" << minvalue(root)->data <<endl;

cout<<"Maximum value " <<maxvalue(root)->data <<endl;

// Delete function call : 
root=deleteFromBST(root,10);

cout<<"Printing the BST"<<endl;
levelOrderTraversal(root);

cout<<endl;

cout<<"Minimum value" << minvalue(root)->data <<endl;

cout<<"Maximum value " <<maxvalue(root)->data <<endl;

return 0;
}


/*
 input : BST 
            50
        20       70
    10     30       90 
                       110

50 20 70 10 30 90 110 -1           



Output when we delete the node 10:



Enter the data to create BST  
50 20 70 10 30 90 110 -1    
Printing the BST
50 
20 70 
10 30 90 
110 

Minimum value10
Maximum value 110
Printing the BST
50 
20 70 
30 90 
110 

Minimum value20
Maximum value 110


*/
