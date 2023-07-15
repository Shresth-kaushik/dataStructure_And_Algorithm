#include<iostream>
#include<math.h>
using namespace std;

// WAP to convert  decimal to binary ;
int main()
{
   int n;
   int ans=0,i=0;
    cin>>n;

    while(n!=0)
    {
       int bit=n&1; 
       ans = bit * pow(10,i) + ans ;
        n=n >> 1 ;
       i++ ;
    }
    cout<<ans;


// int n;
// int count=0;
// cin>>n;

// while(n!=0){
//     if(n & 1){
//     count++;}

//     n=n>>1;

// }

// if(count==1)
// cout<<"Yes"<<endl;
// else
// cout<<"No"<<endl;
 
//     return 0;
// }


/*
WAP to reverse a integer and if it is out of int range print 0 for that ;

int reverse(int n) {
        int ans=0;
        
        while(n!=0){
        int digit = n%10 ;
            
            if((ans>INT_MAX/10) || (ans< INT_MIN/10))
                return 0;
            
            else {
                ans=ans*10 + digit;
            }
            n=n/10;
        }
        return ans;
        
    }*/