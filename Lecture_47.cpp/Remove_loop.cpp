/*----------->> IMPORTANT HAI YA <----------
USIng the floyd's algo:  

Node* fcdAlgo(Node*head)
{
    if(head==NULL)
    return NULL;

    Node* slow=head;
    Node* fast=head;

    while(slow!=NULL  && fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        fast=fast->next;

        slow=slow->next;

        if(fast==slow)
        return slow;
    }
    return NULL;

    }


Node* getfirstnode(Node* head)
    {
    if(head==NULL)
    return NULL;

    Node*intersection=fcdAlgo(head);
    if(intersection==NULL)
    return NULL;
    Node* slow=head;
    while(slow!=intersection)
    { slow=slow->next;
      intersection=intersection->next;
    }
    return slow;
    }


Node *removeLoop(Node *head)
{        if(head==NULL)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
             return NULL;
Node* startOfLoop=getfirstnode(head);
Node* temp=startOfLoop;
while(temp->next!=startOfLoop)
{
    temp=temp->next;
}
temp->next=NULL;
return head;



*/


/*

------------------> METHOD 2 <------------------


void hashAndRemove(Node * head) {
  unordered_map < Node * , int > node_map;
  Node * last = NULL;
  while (head != NULL) {
    if (node_map.find(head) == node_map.end()) {
      node_map[head]++;
      last = head;
      head = head -> next;
    } else {
      last -> next = NULL;
      break;
    }
  }
}


*/