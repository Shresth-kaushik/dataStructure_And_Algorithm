// Below is the detailed explanation for printing of supersequence.  Here we first do lcs and then like @Aditya showed in printing of LCS you can check for following:
// 1. if character exists in both add to string.
// 2. if not check dp[i][j-1] >dp[i-1][j] which means the str which represents column its jth is not common so push that but dont push row as chances are it can still exist.
// 3. Do opposite in else.
// 4. once out of while loop check if i or j is greater and insert them into string.

// Below is the code for that:

string lcs(string str1, string str2, int m , int n) {
        int dp[m+1][n+1];
        
        for(int i=0;i<=m;i++)
            for(int j=0;j<=n;j++)
                if(i==0 || j==0)
                    dp[i][j] = 0;

        for(int i=1;i<=m;i++) {
            for(int j=1;j<=n;j++) {
                if(str1[i-1]==str2[j-1]) {
                    dp[i][j] = 1+ dp[i-1][j-1];
                } else {
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                }
            }
        }
        
        int i=m,j=n;
        string s;
        while(i>0 && j>0) {
            if(str1[i-1] == str2[j-1])
            {
                s.push_back(str1[i-1]);
                i--;
                j--;
            } else {
                if(dp[i][j-1] > dp[i-1][j]) {
                    s.push_back(str2[j-1]);
                    j--;
                } else {
                    s.push_back(str1[i-1]);
                    i--;
                }
            }
        }
        // left string . 
        while(i > 0) {
            s.push_back(str1[i-1]);
            i--;
        }
        
        while(j > 0) {
            s.push_back(str2[j-1]);
            j--;
        } 
        // Reverse the string to get the original string 
        reverse(s.begin(), s.end());
        return s;

    }


    /*
    
    We start from the bottom-right most cell of the matrix and 
push characters in output string based on below rules-

 1. If the characters corresponding to current cell (i, j) 
    in X and Y are same, then the character is part of shortest 
    supersequence. We append it in output string and move 
    diagonally to next cell (i.e. (i - 1, j - 1)).

 2. If the characters corresponding to current cell (i, j)
    in X and Y are different, we have two choices -

    If matrix[i - 1][j] > matrix[i][j - 1],
    we add character corresponding to current 
    cell (i, j) in string Y in output string 
    and move to the left cell i.e. (i, j - 1)
    else
    we add character corresponding to current 
    cell (i, j) in string X in output string 
    and move to the top cell i.e. (i - 1, j)

 3. If string Y reaches its end i.e. j = 0, we add remaining
    characters of string X in the output string
    else if string X reaches its end i.e. i = 0, we add 
    remaining characters of string Y in the output string.
    
    */