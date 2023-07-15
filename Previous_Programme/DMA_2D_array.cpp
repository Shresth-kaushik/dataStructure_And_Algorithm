#include<iostream>
using namespace std;
int main()
{
    // Dynamic Memory allocation :
    // creation of the 2D array;
    int n;
    cin>>n;
  int **arr=new int*[n];
  for(int i=0;i<n;i++){
    arr[i]=new int [n];
  }

// input and output  of the array :
for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
    cin>>arr[i][j];
}

for(int i=0;i<n;i++)
    for(int j=0;j<n;j++){
    cout<<arr[i][j]<<" ";
}
cout<<endl<<endl;

  return 0;
}