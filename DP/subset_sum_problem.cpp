/*
Problem Statement : We are given with an array and Sum ?  " arr = [2,3,7,8,10] and Sum = 11 ". 
We have to give an output a true/false .. If the sum is present as a subset sum of not . 

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

#include <bits/stdc++.h>
using namespace std;

// Returns true if there is a subset
// of set[] with sum equal to given sum
bool isSubsetSum(int set[], int n, int sum)
{
	// Base Cases
	if (sum == 0)
		return true;
	if (n == 0)
		return false;

	// If last element is greater than sum,
	// then ignore it
	if (set[n - 1] > sum)
		return isSubsetSum(set, n - 1, sum);

	// Else, check if sum can be obtained by any
	// of the following:
	// (a) including the last element
	// (b) excluding the last element
	return isSubsetSum(set, n - 1, sum)
		|| isSubsetSum(set, n - 1, sum - set[n - 1]);
}

// Driver code
int main()
{
	int set[] = { 3, 34, 4, 12, 5, 2 };
	int sum = 9;
	int n = sizeof(set) / sizeof(set[0]);
	if (isSubsetSum(set, n, sum) == true)
		cout << "Found a subset with given sum";
	else
		cout << "No subset with given sum";
	return 0;
}

// =====================================>>> <<<===============================================
/*
// Dyanmic Programming (Top Down Approach .. )

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

*/
