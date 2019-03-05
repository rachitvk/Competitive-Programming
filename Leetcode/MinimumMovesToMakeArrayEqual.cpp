class Solution {
public:
    int minMoves2(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int c;
        c=nums.size()/2;
        int x=nums[c];
        int sum=0;
        for(int i=0;i<nums.size();i++)
            {
                sum+=abs(x-nums[i]);
            }
        return sum;
        }
};class Solution {
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