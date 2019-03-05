class Solution {
public:
    int minMoves(vector<int>& nums) {
        
        int n=nums.size();
        long long sum=0;
        long long mn=INT_MAX;
        
        if(n<=1)
            return 0;
        
        for(int i=0;i<nums.size();i++){
           if(mn>nums[i])
               mn=nums[i];
            sum+=nums[i];
        }
        
        return sum-mn*n;
    }
};