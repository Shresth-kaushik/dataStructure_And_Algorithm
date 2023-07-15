#include<iostream>
#include<math.h>
using namespace std;

void printarr(int arr[],int n)

{   
     int i;
    for( i=0;i<n;i++){
       cout<<arr[i]<<" ";
       
    }

   cout<<endl;

}


void reversearr(int arr[],int start,int end){

    while(start<end){
     
    int temp;
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
}
}


int  REVERSE(int arr[], int start ,int end,int n){
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}


int main(){
    int arr[50],n;
    cout<<"enter the value of size"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // reversearr(arr,0,n-1);
    // cout<<"The reverse of the given array" <<endl;
    // printarr(arr,n);

    REVERSE(arr,0,n-1,n);
    cout<<"THE REVERSE OF THE ARRAY IS " << endl;
    printarr(arr,n);

return 0;
}