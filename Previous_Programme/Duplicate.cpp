#include<iostream>
#include<math.h>
using namespace std;

void sort(int arr[],int n){
    int l=0,r=n-1;
    
while(l<r){

   while(arr[l]==0 ){
    l++;}
}
while(arr[r]==1){
r--;}

swap(arr[l],arr[r]);
l++;
r--;


}

 void print(int arr[],int n){
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;

 }
int main()
{
    // use the ^ operation 
    // a^a=0    and    0^a=a   
    //  IF we EXOR  with the same  array  then we will get the unique element :


    int arr[10]={1,0,0,1,1,0,1};
    sort(arr,10);
    print(arr,10);

    return 0;
}