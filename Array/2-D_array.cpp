#include<iostream>
using namespace std;
// here we are calculating the largest row sum and in which row it is present ::

int largest_(int arr[][3],int row ,int col)
{  
    int maximum=-100;
    int rowindex=-1;
    for(int row=0;row<3;row++)
 {    int sum=0;
   for(int col=0;col<3;col++){
       sum=sum+arr[row][col];
       }
       if(sum >maximum){
           maximum=sum;
           rowindex=row;
       }
  }

  cout<<"The maximum sum is "<< maximum <<" "<<endl;
  return rowindex;
}


int main()
{
    int arr[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    
    // printing:

    //  for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<3;j++){
    //      cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
 cout <<  largest_(arr,3,3)<<" "<<endl;
  return 0;

}