// Question : Rod cutting problem . 
/*

Given a rod of length n inches and an array of prices that contains prices of all pieces of size smaller than n. Determine the  maximum value obtainable by cutting up the rod and selling the pieces. 
Example: 
if length of the rod is 8 and the values of different pieces are given as following, then the maximum obtainable value is 22 (by cutting in two pieces of lengths 2 and 6)


length   | 1   2   3   4   5   6   7   8  
--------------------------------------------
price    | 1   5   8   9  10  17  17  20


If the lenght array is not given form  the array => [ length from 1-> n];

*/

// code 

// Working solution of Rod cutting on Gfgs: All testcases passed as the solution/approach told by you Aditya. :)
// Thank you for amazing videos :)

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cutRod(int price[], int n) {
        //code here
        int dp[n+1][n+1];
        
        // Initialization 
          for(int i=0;i<=n;i++)
          {
              for(int j=0;j<=n;j++)
              {
                  if(i==0)
                  {
                  dp[i][j]=0;
                    
                  }
                  if(j==0)
                  {
                      dp[i][j]=0;
                  }
              }
          }
          
          
            for(int i=1;i<=n;i++)
          {
              for(int j=1;j<=n;j++)
              {
                  if(i<=j)
                  {
                      dp[i][j]=max(price[i-1]+dp[i][j-i],dp[i-1][j]);
                  }
                  else
                  {
                      dp[i][j]=dp[i-1][j];
                  }
              }
          }
          
          return dp[n][n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends