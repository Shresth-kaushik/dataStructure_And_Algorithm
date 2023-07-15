#include<iostream>
using namespace std;
/*


*/
void move_zeroes(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}
int main(){
    int arr[30],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    move_zeroes(arr,n);
 
    cout<<"Printing the answer"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;

}