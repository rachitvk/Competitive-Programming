class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int>hash(10001,0);
        vector<int>dp(10001,0);
        
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        
        dp[1]=hash[1];
        
        for(int i=2;i<=10000;i++){
            dp[i]=max(dp[i-1],dp[i-2]+hash[i]*i);
        }
        
        return dp[10000];
    }
};