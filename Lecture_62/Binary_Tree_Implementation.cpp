#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class node{

public:
    int data;
    node*left;
    node*right;

node(int data)
{
    this->data=data;
    this->left=NULL;
    this->right=NULL;
}
};

node* buildTree(node* root)
{
cout<<"Enter the data "<<endl;
int data;
cin>>data;

// Creating the newnode :
root=new node(data);

if(data==-1)
return NULL;

cout<<"Enter the data for insertion in left " << data <<endl;
root->left=buildTree(root->left);

cout<<"Enter the data for insertion in right "<< data << endl;
root->right=buildTree(root->right);

return root;
}


// TRAVERSING : LEVEL ORDER =>


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


// ---------------------->>>> REVERSE LEVEL ORDER <<<<<-------------



void reverseLevelOrder(node* root)
{
    stack <node *> S;
    queue <node *> Q;
    Q.push(root);
 
    // Do something like normal level order traversal order. Following are the
    // differences with normal level order traversal
    // 1) Instead of printing a node, we push the node to stack
    // 2) Right subtree is visited before left subtree
    while (Q.empty() == false)
    {
        /* Dequeue node and make it root */
        root = Q.front();
        Q.pop();
        // Rather than printing the node we have push the node in the stack and then get the order as we 
        // requried :
        S.push(root);
 
        /* Enqueue right child */
        if (root->right)
            Q.push(root->right); // NOTE: RIGHT CHILD IS ENQUEUED BEFORE LEFT
 
        /* Enqueue left child */
        if (root->left)
            Q.push(root->left);
    }
 
    // Now pop all items from stack one by one and print them
    while (S.empty() == false)
    {
        root = S.top();
        cout << root->data << " ";
        S.pop();
    }
}



// -------------------------->>>>> INORDER TRAVERSAL <<<<<<---------------

void Inorder(node*root)
{
    node*temp=root;
    // Base case:
    if(temp==NULL){
        return ;
    }
    
    Inorder(temp->left);
    cout<<temp->data<<" ";
    Inorder(temp->right);
}


// --------------->>>> PREORDER <<<<<-----------------------
void Preorder(node*root)
{
    node*temp=root;
    // base case 
    if(temp==NULL)
    return ;

   cout<<temp->data <<" ";
    Preorder(temp->left);
    Preorder(temp->right);

}


// --------------------->>>>> POSTORDER (LRN)<<<<--------------
void Postorder(node*root)
{
    node*temp=root;
    // base case 
    if(temp==NULL)
    return ;

// LRN
    Postorder(temp->left);
    Postorder(temp->right);
    cout<<temp->data <<" ";

}




// ------------------->>>>>> IMPLEMENTATION <<<<<---------------------------
// Here we try to implement the binary tree using the level Order traversal : 
// We input the level by level tom the tree:

void buildfromLevelorder(node*&root)
{
    queue<node*>q;
    cout<<"Enter the root data "<<endl;
    int rootdata;
    cin>>rootdata;
    root=new node(rootdata);
    q.push(root);

    while(!q.empty())
    {
        node*temp=q.front();
        q.pop();

        cout<<"Enter the left node data  " <<temp->data<<endl;
        int leftnodedata;
        cin>>leftnodedata;

        if(leftnodedata!=-1)
        {
            temp->left=new node(leftnodedata);
            q.push(temp->left);
        }

        cout<<"Enter the right node data "<<temp->data<<endl;
        int rightnodedata;
        cin>>rightnodedata;

       if(rightnodedata!=-1)
        {
            temp->right=new node(rightnodedata);
            q.push(temp->right);
        }

    }


}



int main()
{
node *root=NULL;

/*

// creating the tree :
root=buildTree(root);

// 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
cout<<"The level order traversal is "<< endl;
 levelOrderTraversal(root);


// Tree traversal's :
cout<<"Inorder traversal is "<<endl;
Inorder(root);

cout<<"Preorder traversal is "<<endl;
Preorder(root);

cout<<"Postorder traversal is "<<endl;
Postorder(root);

*/


// Tree formed from level order traversal :
buildfromLevelorder(root);
Preorder(root);
cout<<endl;
Inorder(root);
cout<<endl;
Postorder(root);
cout<<endl;

return 0;
}




