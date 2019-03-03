class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int f,s,t;
        
        if(nums.size()==0)
            return false;
        
        f=nums[0];s=INT_MAX;t=INT_MAX;
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=f)
                f=nums[i];
            else if(nums[i]<=s)
                s=nums[i];
            else if(nums[i]<=t)
                t=nums[i];
        }
        
        if(s!=INT_MAX && t!=INT_MAX)
            return true;
        return false;
        
    }
};