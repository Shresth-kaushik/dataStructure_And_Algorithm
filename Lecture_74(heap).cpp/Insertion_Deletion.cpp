// Code KA output galat aa raha hai be carefull 

#include<iostream>
using namespace std;

class heap {
public:

int arr[100];
int size;

heap()
{
    arr[0]=-1;
    size=0; 
}

void Insert(int val)
{
    size=size+1;
    int index=size;
    arr[index]=val;

    while(index >1)
    {
        // parent find karo;
        int parent= (index)/2;

        if(arr[parent] < arr[index])
        {
            swap(arr[parent],arr[index]);
            index=parent;
        }
        else        
        return;
    }
}

void print()
{
   for(int i=1;i<=size;i++)
   {
    cout<<arr[i]<<" ";
   }cout<<endl;
}


void DeleteFromHeap()
{
    // base case :
    if(size==0){
    cout<<"Noting found to be deleted"<<endl;
    return;
    }

    // Step 1: point the last node to the first/root node :
    arr[1]=arr[size];

    // step 2 : Remove the last node:
    size--;

    // Step 3 : Place the root node to its correct position :
    int i=1;
    while(i < size)
    {
        int leftindex=2*i;
        int rightindex= (2*i + 1) ;

        if(leftindex < size && arr[leftindex] > arr[i]){
            swap(arr[i],arr[leftindex]);
            // update the Value of the i:
            i=leftindex;
        }
        else if(rightindex < size && arr[rightindex] > arr[i])
        {
            swap(arr[i],arr[rightindex]);
            i=rightindex;
        }
        else 
        return ;

    }

}

};





// --------------------->>>> Heapify Algorithm <<<<-------------------------- 

void heapify(int arr[],int n ,int i)
{
    //'i' is the largest element and we have to place it to its right position  ;
    int largest=i;
    int left=2*i;
    int right=(2*i+1);

// Left==n because we start the index from 1 :
    if(left <= n  &&  arr[largest] < arr[left] )
    {
        largest=left;
    }
    if(right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }
    
    // Check Karo ki largest update hyua ki nahi :
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}




// ------------->>>> HEAP SORT <<<-----------------------------

void Heap_sort(int arr[],int n)
{
    int size=n;

    while(size > 1)
    {
    // Step 1: Swap the first and the last index : 
    swap(arr[size],arr[1]);

    // Step :2
    size--;

    // Step 3; Place the root node to its correct position :
    // i=1 : calling the heapify for the root node => i=1:
    heapify(arr,size,1);

    }
    
}




int main()
{
heap h;
h.Insert(50);
h.Insert(55);
h.Insert(53);
h.Insert(52);
h.Insert(54);

h.print();


h.DeleteFromHeap();
h.print();


int arr[6]={-1,58,53,55,52,50};
int n=5;
//Heapify only the first n/2 elements because leaf node to already he Heapify hai :

// HeaprCreation :
for(int i=n/2; i>0 ;i--){
    heapify(arr, n , i);
}

cout<<"Printing the array "<<endl;
for(int i=1;i<=n;i++)
{
    cout<<arr[i]<<" ";
}cout<<endl<<endl;


Heap_sort(arr,n);
cout<<"Printing the sorted array "<<endl;
for(int i=1;i<=n;i++)
{
    cout<<arr[i]<<" ";
}cout<<endl;

return 0;
}



/*
Expected O/P is 55 54 53 50 52 ==> Dry Run Copy mai hai ;
*/