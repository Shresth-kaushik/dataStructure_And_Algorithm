#include<iostream>
#include<vector>

/*
Explanation about the question : 

step 1 . Form the dp array/ vector  initalize with (-1) ==> we can store the values of the prevoius results .
step 2 . before returning the result store it in the dp;
step 3 . condition check before the recurssive function call => dp[]!=-1 --> return the store value 
*/

class Solution {
public:
    int fibbo(int n , vector<int>&dp) {
       
        if(n<= 1){
        dp[n]= n;
        return dp[n];
        }
       
       if(dp[n]!= -1) // condition check for the dp case 
       return dp[n];
       
       dp[n] = fibbo(n-1 , dp) + fibbo(n-2 ,dp); // step 2 . storing the result in dp 
       return dp[n];
    }

    int fib(int n){
    vector<int>dp(n+1,-1); // step 1 . dp formation 
    fibbo(n, dp);
    return dp[n];

    }

};

// Time complexity  => O(n) because we are only finding the value of the dp array 
// Space complexit  => O(n) + O(n) for vector and depth of the recurrsion tree ==> O(n) ;