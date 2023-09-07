/*
We have  2 string => print the longest subsequence 

*/


int longestCommonSubsequence(string text1, string text2) {
        int l1=text1.length(),l2=text2.length();
        int dp[l1+1][l2+1];
        
        for(int i=0;i<=l1;i++)
        {
            for(int j=0;j<=l2;j++)
            {
                if(i==0 || j==0) dp[i][j]=0;
                
                else if(text1[i-1]==text2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        //Now to print the sequence, we go through the array
		int i=l1,j=l2;
		
		while(i>0 && j>0)
		{
			if(text1[i-1]==text2[j-1]
			{
				cout<<text1[i-1];
				i--;
				j--;
			}
			
			else {
				if(dp[i-1][j] < dp[i][j-1])
				{
					j--;
				}
				
				else
				i--;
			}
		}	
	}
	```