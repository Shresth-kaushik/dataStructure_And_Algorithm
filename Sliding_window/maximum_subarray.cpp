// INTERVIEW BIT PE SOLVE KIYA HAI 

// Return the Maximum of the all subarray of size K , / sliding window : 

class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        deque<int>q;
        int i=0,j=0;
        vector<int>res;
        while(j<n){
            // before pushing the arr[j] in the deque -> we check that is there is any element before
            // arr[j] and lesser than arr[j]-> remove it (there is no use of it).
            // CALCULATION
            while(!q.empty() && q.back()<arr[j]) q.pop_back();
            q.push_back(arr[j]);

            // WINDOW NOT HITTED 
            if(j-i+1<k) j++;
            // WINDOW HITTED
            else if(j-i+1==k){
                // CALCULATION SE ANSWER FIND KARO :
                res.push_back(q.front());
                // SLIDING of window
                if(q.front()==arr[i]) q.pop_front(); // removing the first element .
                i++;
                j++;
            }
        }
        return res;
    }
};