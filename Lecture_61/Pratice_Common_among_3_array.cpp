//{ Driver Code Starts
#include<iostream>
#include<vector>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            
           vector<int>v,v1;
          
        //   for(int i=0;i<n1;i++){
        //       v.push_back(A[i]);
        //   }
          
        //   for(int i=0;i<n2;i++){
        //       v.push_back(B[i]);
        //   }
          
        //   for(int i=0;i<n3;i++){
        //       v.push_back(C[i]);
        //   }
        
    int i=0;
    while(i < n3 || i<n2 || i< n1){
        v.push_back(A[i]);
        v.push_back(B[i]);
        v.push_back(C[i]);
        
        i++;
    }
          
      
        //   return v1;
        sort(v.begin(),v.end());
        

        while(i<v.size())
        {
            if(v[i]==v[i+1]  && v[i+1]==v[i+2]){
            v1.push_back(v[i]);
            i=i+2;
            }
        }
          
        if(!v1.empty())
        return v1;
        else {
            v1.push_back(-1);
            return v1;
        }
 
      }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends