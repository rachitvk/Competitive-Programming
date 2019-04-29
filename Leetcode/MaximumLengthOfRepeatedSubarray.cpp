class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        
        int m = A.size();
        int n = B.size();
        
        int dp[m+1][n+1] = {0};
        
        int ans = 0;
        memset(dp,0,sizeof(dp));
        
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(A[i-1] == B[j-1]){
                     dp[i][j] = 1+dp[i-1][j-1];
                     ans = max(ans,dp[i][j]);
                }
                else
                    dp[i][j] = 0;
            }
        }
        return ans;   
    }
};