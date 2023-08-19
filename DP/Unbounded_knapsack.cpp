// function only : 
// // GFG se dekh sakte hain . => Question . 
//{ Driver Code Starts
// Initial Template for C++

// Question  :  
// Input: N = 2, W = 3
// val[] = {1, 1}
// wt[] = {2, 1}
// Output: 3
// Explanation: 
// 1.Pick the 2nd element thrice.
// 2.Total profit = 1 + 1 + 1 = 3. Also the total 
//   weight = 1 + 1 + 1  = 3 which is <= W.

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
       int dp[N+1][W+1];
        for(int i =0;i<=N;i++){
            for(int j=0;j<=W;j++){
                
                if(i==0 || j==0)
                    dp[i][j] = 0;
                    
                else if(wt[i-1] <= j )
                    dp[i][j] = max( val[i-1] + dp[i][j-wt[i-1]] , dp[i-1][j]) ;
                
                else
                dp[i][j] = dp[i-1][j];
                }
            }
            return dp[N][W];
        }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends