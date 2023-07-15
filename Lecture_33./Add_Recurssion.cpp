#include<iostream>
using namespace std;

int add_binary(int arr[],int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return arr[0];

    int sum=0;
    sum=add_binary(arr+1,n-1)+arr[0];
    // Phela mana yha sum bhi add kardiya tha but sum nahi because ya function call hi uska kaam kar rahi hai;
    // sum=sum+add_binary(arr+1,n-1)+arr[0]; ---> ya wrong hain
    return sum;

}

int main()
{
    // size lie between 0-10;
    int size ;
    cin>> size ;
    int arr[10];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    int ans=add_binary(arr,size);
    cout<<ans<<endl;

    return 0;
}
