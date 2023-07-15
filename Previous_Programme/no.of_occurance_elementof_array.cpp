#include<iostream>
using namespace std;
int firstoccurance(int arr[],int size,int key){

    int start=0;
    int end=size-1;
    int ans =-1;
     int long long mid=(start +end)/2;
     while (start<=end)
     {
     if(key==arr[mid]){
        ans=mid;
          end=mid-1;
     }
     else if(key>arr[mid]){
         start=mid+1;
     }
     else if(key<arr[mid]){
         end=mid-1;
     }
     mid=(start +end)/2;
     }
     return ans;
     
}
int lastoccurance(int arr[],int size,int key){

    int start=0;
    int end=size-1;
    int ans =-1;
     int long long mid=(start +end)/2;
     while (start<=end)
     {
     if(key==arr[mid]){
        ans=mid;
        start=mid+1;   
     }
     else if(key>arr[mid]){
         start=mid+1;
     }
     else if(key<arr[mid]){
         end=mid-1;
     }
     mid=(start +end)/2;
     }
     return ans;
}
int main(){
    int arr[50],n,key;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key"<<endl;
     cin>>key;
     firstoccurance(arr,n,key);
     cout<<"First occurance of "<< key <<" is at index "<<firstoccurance(arr,n,key)<<endl;
     cout<<"Last occurnace of "<< key <<" is at index "<<lastoccurance(arr,n,key)<<endl;

     int no_occurance =(lastoccurance(arr,n,key) - firstoccurance(arr,n,key))+1;
    //  DIfference between last and first occurance +1 gave the no. of occurances;
       
        cout<<"no of occurance of "<<key<<" is "<< no_occurance<<endl;
     return 0;
}
