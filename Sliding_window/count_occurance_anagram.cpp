// Code to count the occurrance of the anagram in the prb.?
int search(string pat, string txt) {
    	    int n = txt.length(); // length of txt
            int k = pat.length(); // window size
            // variable to store count of the occurences of anagrams of word in the text
             int ans = 0; 
            
           // storing frequency of characters in string : pat
            vector<int>hashPat(26,0);
            for(int i = 0;i<k;i++){
                hashPat[pat[i]-'a']++;
            }
            
            // storing frequency of characters in string : txt
            vector<int>hashTxt(26,0);
            
            int i = 0 , j = 0; // start of window and end of window
            
            while(j<n){
                
                hashTxt[txt[j]-'a']++;
                
                if(j-i+1 == k) // condition for attaining window size of 'k'
                {
                    if(hashTxt == hashPat) // freq. of characters matches
                    ans++;
                    
                   hashTxt[txt[i] - 'a']--; // to maintain the size of window
                    i++;
                }
                j++;
            }
	    return ans;