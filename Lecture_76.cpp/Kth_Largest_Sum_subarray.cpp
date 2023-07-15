/*
Sample Input 1 :
2
3 3
3 -2 5
2 2
4 1
Sample output 1 :
3
4


Explanation of Sample output 1 :
For the first test case, 
Sum of [0, 0] = 3
Sum of [0, 1] = 1
Sum of [0, 2] = 6
Sum of [1, 1] = -2
Sum of [1, 2] = 3
Sum of [2, 2] = 5
All sum of subarrays are {6, 5, 3, 3, 1, -2} where the third largest element is 3.

For the second test case, 
Sum of [0, 0] = 4
Sum of [0, 1] = 5
Sum of [1, 1] = 1

All sum of subarrays are {5, 4, 1} where the second largest element is 4.

*/



// Approach #1 : 

#include<vector>
int getKthLargest(vector<int> &arr, int k)
{
	vector<int> ans;
	int n=arr.size();

	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=i ;j<n;j++)
		{
			sum=sum+arr[j];
			ans.push_back(sum);
		}
	}
	sort(ans.begin(),ans.end());
	return ans[ans.size()-k];
}




// Approach #2 : USing the min heap  => Kth largest is the top of the of the heap :
int getKthLargest(vector<int> &arr, int k)
{
	
	priority_queue<int ,vector<int> ,greater<int> > pq;

	for(int i=0;i<n;i++)
	{
        int sum =0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(pq.size() < k)
            {
                pq.push(sum);
            }
            else
            {
                if(sum > pq.top())
                {
                    pq.pop();
                    pq.push(sum);
                }
            }
        }
    }
    return pq.top();
}




/*
class Solution {
public:
    struct isGreater{
     bool operator()( ListNode* a, ListNode* b){
        return a -> val >= b -> val;
    }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        //Take each element, place into heap, and then take them out
        if(lists.size() == 0)
            return NULL;
        priority_queue <ListNode*, vector<ListNode*>,isGreater> pq;
        for(int i =0; i < lists.size();++i)
            {
            auto a = lists[i]; 
            if(!a)
                continue;
            pq.push(a); //we only need the iterator 
            }
        ListNode* root = new ListNode(); //dummy node first
        ListNode* trav = root;

        while(!pq.empty())
        {
            ListNode* curr = pq.top();
            if(!curr)
                break;
            trav -> next = curr;
            trav = curr;
            pq.pop();
            if(curr -> next)
                pq.push(curr -> next);
        }

        return root -> next;
    }
};
*/