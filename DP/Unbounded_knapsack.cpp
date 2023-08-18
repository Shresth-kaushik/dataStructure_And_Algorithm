// function only :
int Unboundedknapsack(int val[],int wt[],int n,int w)
{
	int dp[n+1][w+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=w;j++)
		{
			if(i==0 || j==0)
			dp[i][j]=0;
           else if (wt[i-1] <= w) 
                 dp[i][j] = max(val[i-1] + dp[i][j-wt[i-1]],  dp[i-1][j]);  // if taken then we can take that value again . 

           else
                 dp[i][j] = dp[i-1][j]; // not included.
		}
	}
	return dp[n][w];	
}