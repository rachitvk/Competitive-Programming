class Solution {
public:
    
    long long dp[1010][1010];
    
    int k;
    
    long long CopyPaste(int n,int x){
          
        if(n == k)
            return 0;
        if(n > k)
            return 100000;
        
        if(n == x)
            dp[n][x] = 1+CopyPaste(n+x,x);
        else
            dp[n][x] = 1+min(CopyPaste(n,n),CopyPaste(n+x,x));
        
        return dp[n][x];
    }
    
    int minSteps(int n) {
        
        if(n==1)
            return 0;
        
        k = n;
        memset(dp,-1,sizeof(dp));
        return 1+CopyPaste(1,1);
    }
};