// GFG question : Longest k unique character substring 
// ans : Approach , aditya sir lecture 

// code 
//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int i=0 , j=0;
        unordered_map<char , int>mp; // character , count of the character count 
        int mx = -1;
        
        while(j<s.length()){
            // base case 
            mp[s[j]]++;
            
            // if the character is already present  in the map then increase the count of the map 
            if(mp.size() < k)
            j++;
            
            // codition check 1 
            else if(mp.size() == k){
                // ans = (j-i+1); // store the window size => we have to find out the maximum k unique substring
                mx = max(mx,j-i+1); // max b/w ans and maxi 
                j++;
            }
            
            // condition check 2  size is greater than the k.
            else if(mp.size() > k){
                while(mp.size() > k){
                    mp[s[i]]--;
                    
                    if(mp[s[i]] == 0){
                        mp.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
        }
        return mx;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends