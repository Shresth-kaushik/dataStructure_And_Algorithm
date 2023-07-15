#include<iostream>
using namespace std;
int peak(int arr[],int size){
    int start =0;
    int end=size-1;
    int long long  mid=(start + end )/2;
    while (start<end){
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            return mid;
        }
        else if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }
        else{
            end=mid+1;
        }
        mid=(start+end)/2;
}
return start;
}
int main()
{
    int arr[50],n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    peak(arr,n);
     cout<<"Peak of mountain is at index  "<<  peak(arr,n) << "and  had value "<< arr[peak(arr,n)]<<endl;
   
   return 0;
}