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
        //   if last occurance is asked then 
        // star =mid+1;
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
     cout<<"First occurance of "<< key <<" is at index "<<firstoccurance(arr,n,key);
     return 0;
}


/* esma ek hee concept different haa vo haa ke 
if(arr[mid]==key)
then we have to check the further as elements in array is repeated 
for...
first occurance we check to first  part of mid part 
for..
last occurance we check to second part after finding the mid part
*/


