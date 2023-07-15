#include<iostream>
using namespace std;

// #define pi 3.14;


// start=0; means :agar koe value nahi dii toh start = 0  ,, else joo value function mai pass hoge;
void print(int arr[],int n, int start=0 ){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
//   koe bho program and usmay we can use " pi " directly ;
 int n=5;
int arr[5]={1,3,5,7,8};
// hmna esmai start point nahi diya hai ;
print(arr,n);

cout<<endl;
print(arr,n,2);

return 0;

}