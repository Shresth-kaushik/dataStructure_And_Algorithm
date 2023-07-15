#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key)
{
    // we have to find the mid as  mid = (start +end) /2; 
    int start =0;
    int end = size-1;
    int mid=(start+end)/2;
    while(start <=end)
    {
      
      if(arr[mid]==key){
          return mid;
      }
      else if(arr[mid]>key){
          
          end=mid-1;
      }
      else {
             start=mid+1;
      }
      mid=(start+end)/2;
    }
   return 0;
}
int main(){
    int arr[50],n,key;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the key to be searched"<<endl;
    cin>>key;
   binarysearch(arr,n,key);
   cout<<"the index of key is"<<binarysearch(arr,n,key)<<endl;

  return 0;
}