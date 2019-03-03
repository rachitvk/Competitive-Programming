class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n=s.length();
        
        int dp[n+1][n+1]={0};
        
        for(int i=0;i<=n;i++)
            dp[i][i]=1;
        
        for(int i=2;i<=n;i++){
            for(int j=1;j<=n-i+1;j++){
                int k=j+i-1;
                if(s[j-1]==s[k-1])
                    dp[j][k]=2+dp[j+1][k-1];
                else
                    dp[j][k]=max(dp[j+1][k],dp[j][k-1]);
            }
        }
        
        return dp[1][n];
    }
};