class Solution {
public:
    int minDistance(string word1, string word2) {
        
        int n=word1.length();
        int m=word2.length();
        
        int dp[n+2][m+2];
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0 && j==0)
                    dp[i][j]=0;
                else if(i==0)
                    dp[i][j]=1+dp[i][j-1];
                else if(j==0)
                     dp[i][j]=1+dp[i-1][j];
                else if(word1[i-1]==word2[j-1])
                     dp[i][j]=dp[i-1][j-1];
                else
                    dp[i][j]=1+min(dp[i][j-1],min(dp[i-1][j-1],dp[i-1][j]));
                }
            }
        return dp[n][m];
    }
};