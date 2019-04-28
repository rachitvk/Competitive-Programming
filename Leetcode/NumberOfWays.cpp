class Solution {
public:
    
    int dp[101][101];
    
    int s,e;
    
    int helper(int u,int v){
        
     //    cout << u << " " << v << endl;
        
        if(u>=s || v>=e)
            return 0;
        
        if(u == s-1 && v == e-1)
            return 1;
        
        if(dp[u][v]!=-1)
            return dp[u][v];
        
        dp[u][v] = helper(u+1,v) + helper(u,v+1);
        
        return dp[u][v];
        
    }
    
    int uniquePaths(int m, int n) {
        
        s = m;
        e = n;
        
        memset(dp,-1,sizeof(dp));
        
        return helper(0,0);
        
    }
};