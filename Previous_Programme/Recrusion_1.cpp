 #include<iostream>
using namespace std;

int factorial(int n)
{   
    //  here is the Base condition 
    if(n==0)
    return 1;

    int fact=n*factorial(n-1);
    return fact;
}

int main()
{
    int n;
    cin>>n;

   int ans = factorial(n);
    cout << "The factorial is " << ans <<endl;
  
    return 0;
}