/*
Longest Repeating Subsequence :

Given a string, print the longest repeating subsequence such that the 
two subsequence don’t have same string character at same position, i.e.
, any i’th character in the two subsequences shouldn’t have the same
index in the original string.


Example:
Input: str = "aab"
Output: "a"
The two subsequence are 'a'(first) and 'a' 
(second). Note that 'b' cannot be considered 
as part of subsequence as it would be at same
index in both.


Solution : 
Only a minute change : in lcs code , ->
if(a[i-1] == b[j-1]  && (i!=j) ) // i!=j -> is the only line of code we have to add to the lcs 

*/

#include<bits/stdc++.h>
using namespace std;

int sizeOfLargestRepeatingSubSeq(string a, string b, int m, int n){
    int dp[m+1][n+1];
    for(int i = 0; i <= m; i++){
        for(int j = 0; j <= n; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
        }
    }
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(a[i-1] == b[j-1] && i != j){ // only change is that we have add one more condition (i!=j) => is allowed 
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return dp[m][n];
}
int main(){
    string a = "AABEBCDD";

    string b = a;

    int size = a.size();

    cout << "Size Of Largest Repeating SubSeq = " << sizeOfLargestRepeatingSubSeq(a, b, size, size);
}