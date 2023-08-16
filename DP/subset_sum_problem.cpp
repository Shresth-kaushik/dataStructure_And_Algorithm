/*

Problem Statement : We are given with an array and Sum ?  " arr = [2,3,7,8,10] and Sum = 11 ". 
We have to give an output a true/false .. If the sum is present as a subset sum or not . 

Approach and code is Similar to the 0/1 Knapsack Problem : 

Step 1 . Initialization of the matrix => formed (with the changing elements i.e arr , Sum in this case ) 

Form dp[arr.size()+1][Sum+1].

// Base cases 

if(Sum == 0 && arr.size() == 0)
return true;

if(Sum == 0)
return true ; // If sum  is 0 whatever be the size of the arr we can always form the { } -> Subset 

if(arr.size() == 0)  // n = arr.size(). 
return false ; // if the size of the array is 0 i.e we can not get the given sum  so initialize dp (o/p = false ).


// Now According to the question :=> 
for(i->n+1) // n = arr.size() 

if(arr[i] <= sum ){
    // We have 2 choice wheather we have to take it or we can skip it .. 
    dp[i][sum] = dp[i][sum - arr[i]]  || (dp[i-1][sum]);
}
else
dp[i][sum] = dp[i-1][sum]; // completely skip because the sum < arr[i].
  
*/

// Code Approach 1 : 
// A recursive solution for subset sum problem

// Time Complexity: O(2^n) The above solution may try all subsets of the given set in worst case.
//  Therefore time complexity of the above solution is exponential. 
//  The problem is in-fact NP-Complete (There is no known polynomial time solution for this problem).
// Auxiliary Space: O(n) where n is recursion stack space.

// Recurssion 
bool isSubsetSum(int set[], int n, int sum)
{
	// Base Cases
	if (sum == 0)
		return true;
	if (n == 0)
		return false;

	// If last element is greater than sum,
	// then ignore it
	if (set[n - 1] > sum) // as basic approach we have to start the question while checking the last element.
		return isSubsetSum(set, n - 1, sum);

	// Else, check if sum can be obtained by any
	// of the following:
	// (a) including the last element
	// (b) excluding the last element
	return isSubsetSum(set, n - 1, sum)
		|| isSubsetSum(set, n - 1, sum - set[n - 1]);
}



// =====================================>>> <<<===============================================
// Apporoach 2 : 
// Dyanmic Programming (Recurssion + Memoization )

bool subsetSum(int a[], int n, int sum)
{

	if (sum == 0)
		return 1;
		
	if (n <= 0)
		return 0;

	if (tab[n - 1][sum] != -1)
		return tab[n - 1][sum];


	if (a[n - 1] > sum)
		return tab[n - 1][sum] = subsetSum(a, n - 1, sum);
	else
	{	

		return tab[n - 1][sum] = subsetSum(a, n - 1, sum) ||
					subsetSum(a, n - 1, sum - a[n - 1]);
	}
}

// ===================================>>> <<<============================================
// Approach 3 : Top-Down approach 

// Time Complexity: O(sum * n), where n is the size of array.
// Auxiliary Space: O(sum*n), as the size of 2-D array is sum*n.


// Returns true if there is a subset of set[] (array)
// with sum equal to given sum
bool isSubsetSum(int set[], int n, int sum)
{
    // The value of subset[i][j] will be true if
    // there is a subset of set[0..j-1] with sum
    // equal to i
    bool subset[n + 1][sum + 1]; // matrix formation 
 
    // If sum is 0, then answer is true
    for (int i = 0; i <= n; i++)
        subset[i][0] = true; // We can always form the empty {} matrix for that 
 
    // If sum is not 0 and set is empty,
    // then answer is false
    for (int i = 1; i <= sum; i++) // If array is [] empty ==> then we never form the matrix corresponding to the sum=0;
        subset[0][i] = false;
 
    // Fill the subset table in bottom up manner
    for (int i = 1; i <= n; i++) { // row
        for (int j = 1; j <= sum; j++) { // column
            if (j < set[i - 1])
                subset[i][j] = subset[i - 1][j];
            if (j >= set[i - 1])
                subset[i][j]
                    = subset[i - 1][j]
                      || subset[i - 1][j - set[i - 1]];
        }
    }
 
    return subset[n][sum];
}
 
// Watch the Aditya verma sir's lecture for the better understanding :
// Dynamic playlist 