#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;

// Constructor
Node(int data)
{
    this->data=data;
    this->next=NULL;
}

//Destructor
~Node()
{
    int value=this->data;
    if(this->next !=NULL)
    {
        delete next;
        this->next=NULL;
    }
    cout<<"Memory is free for node of the data "<< value <<endl;
}

};

void insertAt_head(Node* &head,int data)
{   Node *temp=new Node(data);
    temp->next = head;
    head=temp;

}

void inserAt_tail(Node* &tail,int data)
{
  Node*temp=new Node(data);
  tail->next=temp;
  tail=temp;
}

void insertAt_position(Node* &tail,Node* &head,int position,int data)
{  if(position==1)
   {
    insertAt_head(head,data);
    return;
   }

    Node*temp=head;
    int count =1;

    while(count < position-1)
    {
        temp=temp->next;
        count++;
    }
if(temp->next==NULL)
{
    inserAt_tail(tail,data);
    return ;
}

Node* nodeToinsert=new Node(data);
nodeToinsert->next=temp->next;
temp->next=nodeToinsert;

}

// --->DELETION <-----

void deletenode(Node* &head,int position)
{
    // First node delete karni hai 
    if(position ==1)
     {
     Node*temp=head;
    head=head->next;
    temp->next=NULL; 
    //free memeory for starting node;
    delete temp;
    }

// Deletion from any position or at the end;
    else
    {
     Node*curr=head;
     Node*prev=NULL;
     int count =1;

     while(count < position)
     {
       prev=curr;
       curr=curr->next;
       count++;
     }
     prev->next=curr->next;
     curr->next=NULL;
     delete curr;
    
    }
}


void print(Node* &head)
{   Node*temp=head;
    while(temp)
    {
      cout <<temp->data<<" ";
      temp=temp->next;
    }
    cout<<endl;
}

int main()
{
Node*node1=new Node(10);
Node*head=node1;
Node*tail=node1;

print(head);

cout<<endl;
inserAt_tail(tail,20);
inserAt_tail(tail,30);
inserAt_tail(tail,40);
print(head);


cout<<endl;
insertAt_position(tail,head,4,35);
insertAt_position(tail,head,1,5);
insertAt_position(tail,head,7,55);
insertAt_position(tail,head,8,70);
print(head);

cout<<endl;
cout<<"Head KA data  "<<head->data<<endl;
cout<<"tail KA data  "<<tail->data<<endl;

 
// ---->  DELETION  <-----
deletenode(head,1);
print(head);

deletenode(head,6);
print(head);

    return 0;
}