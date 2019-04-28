class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();
        vector<int>dp(n,0);
        
        for(int i=n-1;i>=0;i--){
            if(i+1 >= n || i+2 >= n)
                dp[i] = cost[i];
            else
                dp[i] = cost[i] + min(dp[i+1],dp[i+2]);
        }
        
        return min(dp[0],dp[1]);
        
    }
};