#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n){
    int i,j;
    for( i=1;i<n;i++){
        // round from 1 to (n-1)
        for( j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                // ya to direct swap or ya toh temp function say saa swap kardo;
                // int t =arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=t;
            }
        }
    }
}
// for printing the array after sorting ;

void print_array(int arr[],int n){
    int i;
    for( i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[50],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      bubble_sort(arr,n);
      cout<<"after bubble sorting the array become"<<endl;
      
       print_array(arr,n);

       return 0;
}