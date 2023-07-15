#include<iostream>
using namespace std;
class Node {
  public:
        int data;
        Node* prev;
        Node* next;
   
// Constructor
Node(int d)
{
   this->data=d;
   this->next=NULL;
   this->prev=NULL;
}

//Destructor
~Node()
{
    int value=this->data;
    if(next!=NULL)
    {  delete next;
        next=NULL;
    }
    cout<<"Memory free for the node with data " <<value <<" "<<endl;
}   


};

// <----------------- PRINTING OF THE DLL <-------------------
// Print function 
void print(Node* head)
{
Node* temp=head;
while(temp)
{
cout<<temp->data<<" ";
temp=temp->next;
}
cout<<endl;
}


// ----------------> LENGTH OF THE DLL <-------------------------
// Function to find the length of the Linked list :
int getlength(Node* &head)
{
    int count=0;
    Node* temp=head;
    while(temp)
    {     count++;
          temp=temp->next;
    }
    // cout<<count<<endl;
    return count;
}

// -----------------> INSERTION IN DOUBLY LINKED LIST <----------------------

void insertAtHead(Node* &tail, Node* &head, int data)
{  
   if(head==NULL)
   {
     Node* temp=new Node(data);
     head=temp;
     tail=temp;
   }
else{
    // New node creat karli 
   Node* temp= new Node(data);
   temp->next=head;
   head->prev=temp;

// Changing the position of the head and pointing head at first node;
head=temp;
}
}

void insertAtTail(Node* &tail,Node* &head, int d)
{
   if(tail==NULL)
   {
     Node* temp=new Node(d);
     head=temp;
     tail=temp;
   }


   Node* temp=new Node(d);
   tail->next=temp;
   temp->prev=tail;
   tail=temp;

}


// ----------->INSERTION AT GIVEN POSITION  <------------

void insertAtposition(Node* &tail,Node* &head,int position,int data)
{
    // Prgramme is not running for position first;
    // But running for the last insertion but ---> Tail pointer which points to the last node ,
    // is not updated ----> Updation of the tail is important.;
    if(position==1)
   {
    insertAtHead(tail,head,data);
    return;
   }

    Node*temp=head;
    int count =1;

    while(count < position-1)
    {
        temp=temp->next;
        count++;
    }
// temp is pointing to the last node;

// When insertion is done at tail :
if(temp->next==NULL)
{
    insertAtTail(tail,head,data);
    return ;
}

//   Insertion at position 
Node* nodeToinsert=new Node(data);
 nodeToinsert->next=temp->next;
 temp->next->prev=nodeToinsert;
 temp->next=nodeToinsert;
 nodeToinsert->prev=temp;

}


// -----------------------> DELECTION IN DLL <--------------------


void deletenode(int position , Node* &head,Node* &tail)
{
    // For the first node 
    if(position==1)
    {
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else 
    {
        Node* currnode=head;
        Node* prevnode=NULL;

        int count =1;
        while(count < position)
        {
            prevnode=currnode;
            currnode=currnode->next;
            count++;
        }
       
        if(currnode->next==NULL)
        tail=prevnode;


        currnode->prev=NULL;
        prevnode->next=currnode->next;
        // currnode->next->prev=prevnode;
        currnode->next=NULL;

        delete currnode;

    }
}


int main()
{
    // Node* node1= new Node(10);
    // Node* head=node1;
    // Node* tail=node1;

    Node* head=NULL;
    Node* tail=NULL;
    
    cout<<endl;

  insertAtHead(tail,head,11);
  insertAtHead(tail,head,12);
  insertAtHead(tail,head,13);
  insertAtHead(tail,head,14);
  print(head);
   
  cout<<endl<<endl; 
  insertAtTail(tail,head,40);
  insertAtTail(tail,head,50);
  print(head);
  cout<<endl<<endl;

  cout<<"Length of the Linked List "<<getlength(head) <<endl;
  cout<<endl;

  insertAtposition(tail,head,1,99);
  print(head);
  cout<<endl;

  insertAtposition(tail,head,5,88);
  print(head);
   cout<<"Head "<<head->data<<" "<<endl;
  cout<<"Tail "<<tail->data<<" "<<endl;
  cout<<endl;


  insertAtposition(tail,head,9,77);
  print(head);
  cout<<"Head "<<head->data<<" "<<endl;
  cout<<"Tail "<<tail->data<<" "<<endl;
  cout<<endl;

  deletenode(1,head,tail);
  print(head);
  cout<<"Head "<<head->data<<" "<<endl;
  cout<<"Tail "<<tail->data<<" "<<endl;


  deletenode(8,head,tail);
  print(head);
  cout<<"Head "<<head->data<<" "<<endl;
  cout<<"Tail "<<tail->data<<" "<<endl;



 return 0;
}