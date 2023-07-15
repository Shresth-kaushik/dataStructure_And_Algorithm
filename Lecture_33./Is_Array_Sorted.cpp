#include<iostream>
using namespace std;
bool isSorted(int *arr ,int size)
{
  if(size==0 || size==1)
  return true;
  if(arr[0]>arr[1])
  return false;
  else 
 return isSorted(arr+1,size-1);
}

int main()
{
    int arr[6]={1,5,5,7,9,10};
    int size=6;
   bool ans=isSorted(arr,size);
   
   if(ans){
    cout<<"Array is sorted "<<endl;
   }
   else 
   cout<<"Array is not sorted"<<endl;

    return 0;
}