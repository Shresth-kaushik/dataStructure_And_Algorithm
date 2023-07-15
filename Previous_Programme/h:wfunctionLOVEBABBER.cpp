#include<iostream>
using namespace std;

// Ques 1 : to find the nth term:


/*  int Ap(int n){
    int Nthterm = (3*n)+7;
    return Nthterm;
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    Ap(n);
    cout<<"Nth term is"<< Ap(n)<<endl;
}
   */

  
    int  upd( int a){
       int ans=a*a;
       return ans ;
    }      
    int main(){
        int a=14;
        a=upd(a);
        cout<<a<<endl;
        return 0;
    }          
