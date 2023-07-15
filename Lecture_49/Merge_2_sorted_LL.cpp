/* We have given two sorted linked list :--> Merge them to get a new sorted linked list.

APPROACH 1:
if(head1==NULL) --> means first list is empty 
return head2;

if(head2==NULL)-->means second list is empty 
return head1;

1->2->5; prev and curr: 
2->4->5;    "temp1,temp2" pointer pointing to the second list ;
 
o/p = 1->2->2->4->5;
we have to check that can 'temp' be place into LL first or not :

 prev->data  <= (temp->data) <=curr->data;  ---> true then place temp in between 



HM us linked list ko first mana ge jiska starting element small hai :
solve (function mai smaller will be passed first);


// CODE:

------------>> NODE ADDITION:: <<------------

prev->next=temp1;
temp2=temp1;
temp1->next=curr;

-------------->> UPDATE POINTER  <<-----------
curr=temp1;
temp1=temp2







*/