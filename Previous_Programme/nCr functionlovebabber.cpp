#include<iostream>
using namespace std;

int factorial(int n){
      
     int fact=1;
     cout<<" Defining the factorial of number\n";
     for(i=1;i<=n;i++){
         fact=fact*i;

         return fact;
     }
}
int nCr(int n,int r);
int main(){
    int n, r;
    cout<<"Enter the value of n and r";
    cin>>n>>r;
    cout<<"Answer is"<< nCr <<endl;

}
int nCr(int n,int r){
    cout<<"The nCr formula is  defined as\n";
    int nCr=fact(n)/(fact(r)*fact(n-r));
    return nCr;
}
