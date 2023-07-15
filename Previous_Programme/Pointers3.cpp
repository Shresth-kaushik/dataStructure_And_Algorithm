#include<iostream>
using namespace std;

void update(int *p)
{ 
    *p=*p+1;
    // p=p+1 vala case main update nahi hoge value ;
    // p=p+1;
}
int main(){
    // int arr[10]={1,4,3,5,7,9,45};
    // cout<<endl;
    // cout<<"THe address of first  location of the array" << arr << endl;
    // cout<<"THe address of first  location of the array" << &arr[0] << endl;
    // cout<<"Print the value at the first index of the array " << arr[0] << endl;
    // cout<<"Value present at the first index of the array " << *arr <<endl;

    // cout<<"Value present at the (first +1) index of the array " << *arr+1 <<endl;
    // cout<<"Value present at the (first +1) index of the array " << *(arr)+1 <<endl;
    // cout<<"Value at the index 2 of the array " <<  *(arr+1) <<endl;

    
int value=5;
int *p=&value;

cout<<"Before "<< *p <<endl;
// Function call ;
update(p);
cout<<"After"<< *p <<endl;


    return 0;
}