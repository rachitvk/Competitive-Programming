class Solution {
public:
    int rob(vector<int>& nums) {
        
        
        int n = nums.size();
        
        if(n == 0)
            return 0;
        
        vector<int>dp(n+1,0);
        
        dp[0] = 0;
        dp[1] = nums[0];
        
        for(int i=2;i<=nums.size();i++){
            dp[i] = max(nums[i-1]+dp[i-2],dp[i-1]); 
        }
        
        return dp[n];
        
    }
};