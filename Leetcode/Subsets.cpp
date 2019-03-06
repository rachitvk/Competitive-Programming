class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        n=pow(2,n);
        vector<vector<int>>ans;
        
        for(int i=0;i<n;i++){
            int x=1;
            vector<int>subset;
            for(int j=0;j<nums.size();j++){
                if(x&i)
                    subset.push_back(nums[j]);
                x*=2;
            }
            ans.push_back(subset);
        }
        
        return ans;
    }
};