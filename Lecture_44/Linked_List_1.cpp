// node *next ensures that you've a variable next which is a pointer to the node . 
// int *next would mean that next would point to an integer and not the node , 
// won't give you the linked list, which is what you seem to be looking for


#include<iostream>
using namespace std;
class Node{
public:
    int data;
    // Pointer to the node;
    Node *next;

/*
 Calling of the changed default constructor:
 Node()
 {
    this->data=10;
    this->next=NULL;
 }  
*/

Node(int data)
{
    this->data=data;
    this->next=NULL;
}

};


void insertAt_head(Node* &head,int data)
{
    // Creating the new temp node:
    Node *temp=new Node(data);
    temp->next = head;
    // pointing the head to the temp/first node:
    head=temp;

}

void inserAt_tail(Node* &tail,int data)
{
  Node*temp=new Node(data);
  tail->next=temp;
  tail=temp;
}

// Pass head by reference;
void insertAt_position(Node* &tail,Node* &head,int position,int data)
{
    // Prgramme is not running for position first;
    // But running for the last insertion but ---> .Tail pointer which points to the last node 
    // is not updated ----> Updation of the tail is important.;
    if(position==1)
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

// When insertion is done at tail :
if(temp->next==NULL)
{
    insertAt_tail(tail,data);
    return ;
}

  
  Node* nodeToinsert=new Node(data);
  nodeToinsert->next=temp->next;
  temp->next=nodeToinsert;

}


void print(Node* &head)
{
    // We never traverse the head ---> Head always points to the first node <------
    // Creating the temprary pointer for traversing the linked list :
    Node*temp=head;
    while(temp)
    {
      cout <<temp->data<<" ";
      temp=temp->next;
    }
    cout<<endl;
}

int main()
{
// Creating node1; --> Using modified default conmstructor; 
//   Node* node1=new Node();

Node*node1=new Node(10);
Node*head=node1;
Node*tail=node1;
// Single node hai toh head , tail both points to that node1;
 

//   cout<<node1->data<<endl;
//   cout<<node1->next<<endl;


/*
 print(head);
 
 insertAt_head(head,20);
 insertAt_head(head,30);
 print(head);

*/

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
print(head);

cout<<endl;
cout<<"Head KA data"<<head->data<<endl<<endl;
cout<<"tail KA data"<<tail->data<<endl<<endl;



    return 0;
}