// Time complexity : O(n^2) average case 
// T.C = O(n) -> Best case when the array is sorted .

#include<iostream>
using namespace std;

void sort_bubble(int *arr,int size)
{
//    Ek case solve kar lo baki recurssion dekh la ga 
  if(size==0 || size==1)
    return ;
//   Ek element apni sahin jagah lag gya hai 

  for(int i=0;i<size-1;i++)
  {
    if(arr[i] > arr[i+1])
    {
        swap(arr[i],arr[i+1]);
    }
  }
  sort_bubble(arr,size-1);
}

int main()
{
    int arr[5]={1,5,2,7,3};
    // int size=5;
  sort_bubble(arr,5);
  for(int i=0;i<5;i++){
    cout<< arr[i]<<" ";
  }


}