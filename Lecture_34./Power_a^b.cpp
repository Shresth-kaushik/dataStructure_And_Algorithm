#include<iostream>
#include<math.h>
using namespace std;
int power(int a,int b)
{
    if(b==0)
    return 1;

    if(b==1)
    return a;

    int ans=power(a,b/2);
    // Even case mai:
    if(b%2==0){
        // a^b = a^(b/2)* a^(b/2);
        return ans*ans;}
    else {
      return (a*ans*ans);    
    }
    
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<endl;
    int ans=power(a,b);
    cout<<ans<<endl;
}