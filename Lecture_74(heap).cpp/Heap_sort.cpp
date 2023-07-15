
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