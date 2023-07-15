#include<iostream>
using namespace std;
int jump_(int arr[],int n){
    // As we are initally at index 1 ;
    int jump=n-2;
    if(arr[1]==jump){
        return 1;
        // 1 means possible 
    }
    else{
        return 0;
    } 
}

int main(){
    int n,arr[50];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    jump_(arr,n);
 
     cout<< jump_(arr,n)<<endl;
     return 0;

}