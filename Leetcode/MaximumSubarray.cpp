class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int ans = nums[0];
        int sum;
        
        if(ans < 0)
            sum = 0;
        else
            sum = ans;
        
        for(int i=1;i<nums.size();i++){
            if(sum+nums[i]<0){
                ans = max(ans,sum+nums[i]);
                sum = 0;
            }else{
                ans = max(ans,sum+nums[i]);
                sum+=nums[i];
            }
        }
        
        return ans;
        
    }
};