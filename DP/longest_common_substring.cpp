// Extended version of the Longest common subsequence question :>
/* Problem Statement => 

Given two strings ‘X’ and ‘Y’, find the length of the longest common substring.
Examples:
Input : X = “GeeksforGeeks”, y = “GeeksQuiz”
Output : 5
The longest common substring is “Geeks” and is of length 5.

*/

/*
Approach 1  : Recurssive Version of the Longest common substring ;
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution{
    private:
    int lcs(string X , string Y , int n, int m ,int count){
        
        // base case
        if(n ==0 || m ==0 ){
            return count;
        }
        
        // Matched 
        if(X[n-1] == Y[m-1])
        {
            count =  lcs(X , Y , n-1,m-1 , count+1);
        }
        int count1 = lcs(X,Y,n-1,m ,0) ; // not matched but decreaase the X length .
        int count2 = lcs(X,Y,n,m-1,0) ;// not matched but decrease the Y length.
        
        count = max(count,max(count1,count2));
        return count;
    }
    
    public:
    
    int longestCommonSubstr (string S1, string S2, int n1, int m1)
    {
        int n = S1.length();
        int m = S2.length();
        int count = 0 ;
        // recurrsion 
        return lcs(S1, S2,n , m ,count);
    }
};




//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends

*/






/*
Approach 2 : Top - Down approach : 

class Solution{
    private:
    int lcs(string X , string Y , int n, int m ,int count){
        
        // base case
        if(n ==0 || m ==0 ){
            return count;
        }
        
        // Matched 
        if(X[n-1] == Y[m-1])
        {
            count =  lcs(X , Y , n-1,m-1 , count+1);
        }
        int count1 = lcs(X,Y,n-1,m ,0) ; // not matched but decreaase the X length .
        int count2 = lcs(X,Y,n,m-1,0) ;// not matched but decrease the Y length.
        
        count = max(count,max(count1,count2));
        return count;
    }
    
    public:
    
    int longestCommonSubstr (string S1, string S2, int n1, int m1)
    {
        int n = S1.length();
        int m = S2.length();
        int count = 0 ;
        // Top-down approach : 
        return lcs(S1, S2,n , m ,count);
    }
};
*/
