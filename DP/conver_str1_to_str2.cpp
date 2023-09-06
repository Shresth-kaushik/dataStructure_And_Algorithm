/*
Problem Statement  : Minimum number of the insetion and deletion requried to convert the string1 to string2

Example:

"heap" -> "pea" 

In this example we have " ea " -> LCS (longest common subsequence) 

for the deletion part we have => ( str1.length - lcs )
for the insertion part we have => (str2.length - lcs )

*/

// Function . 

void MinDelAndInsert(string str1, string str2)
{
    int m = str1.size();
    int n = str2.size();
 
    int LCS_Len = LCS(str1, str2, m, n);
 
    cout << "Minimum number of deletions = " << (m - LCS_len)
         << endl;
 
    cout << "Minimum number of insertions = " << (n - LCS_len)
         << endl;


/*

//code 

 #include<bits/stdc++.h>
using namespace std;

int SizeOfLCS(string a, string b, int m, int n){
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
            if(a[i-1] == b[j-1]){
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
    string a = "heap";
    string b = "pea";

    int m = a.size();
    int n = b.size();

    int static lcs = SizeOfLCS(a, b, m, n);

    cout << "No of Deletion = " << m-lcs << endl;
    
    cout << "No of Insertion = " << n-lcs << endl;
}  
         
*/