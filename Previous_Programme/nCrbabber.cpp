/*mere according toh programme sahi haa but output is wrong in some cases*/

// #include<iostream>
// using namespace std;
// int factorial(int a){
//     int fact=1,i;
//     for( i=1;i<=a;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
//  int nCr(int n,int r){
//      int nume=factorial(n);
//      int demno=factorial(r)*factorial(n-r);
//      int ans=nume/demno ;
//      return ans ;
//  }
// int main(){
//     int n,r;
//     cout<<"enter the value of n and r"<<endl;
//     cin>>n>>r;
//     cout<<"The value of nCr  is "<<nCr(n,r)<<endl;
//     return 0;
// }



// prime or not using functions :




// 1-->Prime 
// 0--> not a prime


#include<iostream>
using namespace std;

bool isprime(int n){

    for(int i=2;i<n;i++){
        if(n%i==0)
        return 0;
    }
        return 1;
}

int main(){

    int n;

    cout<<"enter the value of n"<<endl;
    cin>>n;
    if(isprime(n)){
        cout<<"Number is prime "<<endl;
    }
   else {
        
        cout<<"Not a prime number"<<endl;
   }
    return 0;
}