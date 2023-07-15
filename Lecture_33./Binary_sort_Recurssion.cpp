#include<iostream>
using namespace std;

bool issorted(int arr[],int n){
    if(n==0 || n==1)
      return true;

    if(arr[0] > arr[1])
    return false;
    else
    return issorted(arr+1,n-1);  
    // arr+1  next location pay aa jiyanga :: start from second location

}

int main()
{
    int arr[5]={1,5,14,17,19};
int size=5;

bool ans = issorted(arr,size);
if(ans)
cout<<" Given Array is sorted "<<endl;
else
cout<<" Given Array is not sorted"<<endl;
return 0;
}