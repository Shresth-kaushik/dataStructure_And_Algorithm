
// maximum of the array and at what index ;

#include<iostream>
using namespace std;
int findpivot(int arr[],int size){
    int start=0;
    int end=size-1;
    int long long mid=(start+end)/2;
    while(start<end){
     
     if(arr[mid]>=arr[0]){
         start=mid+1;
     }
     else  {
         end=mid;
     }
    
     mid=(start+end)/2;
    //  mid ko update karna hee important step haa;
    }
     return start; 
    //  return end;
}
int main()
{
    int arr[50],n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findpivot( arr,n);
    cout<<"Pivot is at index "<< findpivot(arr,n)<<" and  had value "<< arr[findpivot(arr,n)]<<endl;
    return 0; 
}


// int getpivot_(vector<int>&arr,int n){
//     int s=0;
//     int e=arr.size()-1;
//     int mid=s +(e-s)/2;
//     while(s < e){
//         if(arr[mid] > arr[0]){
//             s=mid+1;
//         }
//         else
//             e=mid;
//         mid=s+(e-s)/2;
//     }
//     return s;    
// }

// //  ya step ha binary search ka liya : 

// int search(vector<int>&arr,int s,int e,int key){
//     int start=s;
//     int end=e;
//      int mid=s+(e-s)/2;
//     while(s<=e){
//         if(arr[mid]==key){
//             return mid;
//         }
//         if(key> arr[mid])
//             start =mid+1;
//         else
//             e=mid-1;
        
//         mid=s+(e-s)/2;
//     }
     
//     return -1;
// }

// int findposition(vector<int>&arr,int n,int k){
//     int pivot =getpivot(arr,n);
//     if( k>= arr[pivot]  && k<= arr[n-1])
//         return search(arr,pivot,n-1,k);
// //     upar wali search in the second line of the/part of the array 
//     else
//         return search(arr,0,pivot-1,k);
// //     search in the first part of the array;
    
// }