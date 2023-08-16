
// LEETCODE Question => Last Stone Weight II 
/*
Problem Statement : 

Given a set of integers, the task is to divide it into two sets S1 and S2 such that the absolute difference between their sums is minimum.
If there is a set S with n elements, then if we assume Subset1 has m elements, Subset2 must have n-m elements and the value of abs(sum(Subset1) – sum(Subset2)) should be minimum.

Example:
Input: arr[] = {1, 6, 11, 5} 
Output: 1
Explanation :
Subset1 = {1, 5, 6}, sum of Subset1 = 12 
Subset2 = {11}, sum of Subset2 = 11 

*/

// Solution  : 
class Solution 
{
public:
    int minimumDifference(vector<int>& nums) 
    {
        int n=nums.size();
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
        }
        bool dp[n+1][sum+1];

        for(int i=0; i<=n; i++)
        {
            dp[i][0] = true;
        }
        for(int i=1; i<=sum; i++)
        {
            dp[0][i] = false;
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=sum; j++)
            {
                if(nums[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j-nums[i-1]] || dp[i-1][j];
                }
                else dp[i][j]=dp[i-1][j];
                }
            }

    //     int diff = INT_MAX;
    //    for (int j = 0; j<=sum/2; j++) 
    //    {
    //        int first=j;
    //        int second=sum-j;
    //         if (dp[n][j] == true && diff>abs(first-second)) 
    //         {
    //             diff=abs(first-second);
    //         }
    //     }

    //     return diff;

    // ANOTHER OPTION 
    int ans ;
    for(int j = sum/2 ; j>= 0 ;j--){
        if(dp[n-1][j] == true){
            ans = j;
            break;
        }
    }
    return abs(ans - (sum - ans));
    }
};
