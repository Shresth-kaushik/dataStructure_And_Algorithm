#include<iostream>
using namespace std;
int findunique(int *arr,int n){
       
       int ans=0;
       for(int i=0;i<n;i++){
           ans=ans^arr[i];
        //    XOR operator is used as  give output 0 (when XOR with same element )
        // and output (same element when XOR with 0)
        // a^a=0   ,   a^0=a;
       }
            return ans;
}

int main(){
    int t;
    cout<<"Enter the test cases"<<endl;
    cin>>t;
    for(int i=1;i<=t;i++){

        int size,arr[50];
        cout<<"enter the size of array"<<endl;
        cin>>size;

        for(int j=0;j<size;j++){
            cin>>arr[j];
        }
        findunique(arr,size);
        cout<<"The unique element is"<<findunique( arr,size)<<endl;
    }
    return 0;
}