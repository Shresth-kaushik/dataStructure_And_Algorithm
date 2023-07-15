// Prb :: we are given an input for example 412 :
// Output will be "four" "one" "two" :

#include<iostream>
using namespace std;

void saydigit(int n,string arr[]){
 if(n==0)
 return ;

int digit=n%10;
n=n/10;
saydigit(n,arr);
// Printing will be done after the returning time of the function :
cout<< arr[digit]<<" ";

}

int main()
{
string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int n;
cout<<"enter the any number "<<endl;
cin>>n;
saydigit(n,arr);
return 0;
}