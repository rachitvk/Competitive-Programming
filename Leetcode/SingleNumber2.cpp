class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        
        for(int i=31;i>=0;i--){
            int c=0;
            for(int j=0;j<n;j++){
               c+=(nums[j]>>i)&1;
            }
            c%=3;
            ans=ans<<1;
            ans+=c;
        }
        return ans;
    }
};