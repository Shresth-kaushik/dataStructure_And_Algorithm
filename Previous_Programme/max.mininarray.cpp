#include<iostream>
using namespace std;

int maxno(int arr[],int n){
    
     int maxno=INT_MIN;
  for(int i=0;i<n;i++) {
      maxno=max(maxno,arr[i]) ;
   }
  return maxno; 
}
/*
 
 int getmax(int arr[], int n){
     int max=INT_MIN ;
     for(int i=0;i<n;i++){
         if(arr[i] > max ){
             max= arr[i];
         }
         return max;
     }
 }

*/

int main (){
     int n,arr[100];
     cout<<"ENTER the size of array"<<endl;
     cin>>n;

     for(int i=0;i<n;i++)
     {
         cin>>arr[i];

     }
     cout<<"Maximum  element of array is"<< maxno(arr , n) << endl;
    return 0;
}



// int main(){
//     int arr[100],n;
//     int sum =0;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         sum=sum+arr[i];

//     }
//     cout<<sum<<endl;
//     return 0;
// }

