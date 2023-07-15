#include<iostream>
using namespace std;
class Node{

public:
int data;
Node* next;
Node* prev;

// Constructor
Node(int d){
 this->data=d;
 this->next=NULL;

}
~Node()
{
    int value=this->data;
    if(this->next!=NULL){
        delete next;
        next =NULL;
    }
    cout<<"Memory is free for the node "<<value<<" "<<endl;
}

};

// - - - - - - - - - - - - > INSERTION Of the node after then given node <- - - - - - - - - - - - - - - - -

void insert(Node* &tail,int element ,int d)
{
    // List is empty :  
    if(tail==NULL){
        Node* newnode = new Node(d);
        tail=newnode;
        newnode->next=newnode;
    }
    // non empty list:
    else 
    {
        // Asssuming that the element is present in it ;
       Node* curr = tail;
       while(curr->data!=element)
       {
           curr=curr->next;
       }

    //    Loop se bhar aa gya then element found ---> curr uspay point kar raha hai;
     Node* temp=new Node(d);
     temp->next=curr->next;
     curr->next=temp;

    }
}

// ---------->PRINTING <---------------

void print(Node* &tail)
{
    Node* temp=tail;

    if(tail==NULL){
        cout<<"List is empty "<<" "<<endl;
        return;
    }

    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(temp!=tail);
    cout<<endl;
}


// -----------------------------------> DELETION <----------------------------
void deletenode(Node* &tail,int value)
{
    if(tail==NULL)
    {
        cout<<"List is empty "<<endl;
        return ;
    }
    else{
        // Assume that value is present in the list ;
        Node* prev=tail;
        Node* curr=prev->next;
       while(curr->data!=value)
       {
        prev=curr;
        curr=curr->next;
       }

       prev->next=curr->next;

    // If single node is present in the linked list : toh usko kasa delete karna hoi;  (LL = 1 node)
    if(curr==prev)
    tail=NULL;

// (LL >=2)
    //    Agar hm current ko he delete kar raha hai toh we have to shift the tail otherwise segmentation fault is there;
       if(tail==curr){
        // tail=curr->next;
        tail=prev;
       }
       curr->next=NULL;
       delete curr;
    }
}


int main()
{
Node* tail=NULL;
insert(tail,5,3);
print(tail);

// insert(tail,3,10);
// print(tail);

// insert(tail,10,15);
// print(tail);

// insert(tail,15,20);
// print(tail);

// insert(tail,15,16);
// print(tail);

deletenode(tail,3);
print(tail);

return 0;
}