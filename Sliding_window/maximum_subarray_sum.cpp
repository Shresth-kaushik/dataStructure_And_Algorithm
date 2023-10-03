/*
Given an array of integers Arr of size N and a number K. 
Return the maximum sum of a subarray of size K.

NOTE*: A subarray is a contiguous part of any given array.

Exmample: 
Input:
N = 4, K = 2
Arr = [100, 200, 300, 400]
Output:
700
Explanation:
Arr3  + Arr4 =700,
which is maximum.

*/
// CODE 
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        
        int i = 0;
        int j = 0;
        
        long long int sum = 0;
        long long int maximum = INT_MIN;
        
        while(j < N){
            // general step applied in all problems
            sum +=Arr[j];
            
            if(j-i+1 < K ){
                j++;
            }
            
            else if(j-i+1 == K){
                maximum = max(maximum , sum );
                sum-=Arr[i];
                i++;
                j++;
            }
        }
        return maximum;
       
    }
};
