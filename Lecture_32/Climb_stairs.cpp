/* You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 
Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps



Solution ::

class Solution {
public:
    int climbStairs(int n) {
        if(n<0)
        return 0;
        else if(n==0)
        return 1;
        else 
        return (climbStairs(n-1)+ climbStairs(n-2));

    }
};

*/