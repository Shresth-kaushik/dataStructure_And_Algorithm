#include<iostream>
using namespace std;
void inseration_sort(int arr[],int n){
     int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        // arr[j] means starting from i-1 to 0 or greater  and also key =arr[i];
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            // j--;
        }
        arr[j + 1] = key;



/*      for(int i=0;i<n;i++){
          int j=i-1;   
          int temp=arr[i];
         for (;j>=0;j--){
             if(arr[j]>temp){
                 arr[j+1]=arr[j];
             }
           else {
               break;
           }
           arr[j+1] =temp;       
         }
        }*/
    }
}



void print_array(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[50],n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      
      inseration_sort(arr,n);
      cout<<"The array after the inseration sort is"<<endl;

      print_array(arr,n);
      return 0;
}