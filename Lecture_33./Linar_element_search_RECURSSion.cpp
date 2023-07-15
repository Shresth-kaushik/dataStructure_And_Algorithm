#include<iostream>
using namespace std;

void search(int arr[],int n,int key)
{
    if(n==0)
    return ;

    if(arr[0]==key)
    cout<<"Element found "<<endl;
    
    else
    search(arr+1,n-1,key);
  
} 

int main()
{
    int size,key;
    cin>>size;
    int arr[10];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key"<<endl;
    cin>>key;
    search(arr,size,key);
    
  
    return 0;
}