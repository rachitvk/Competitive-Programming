class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        vector<int>ans(nums.size());
        
        if(nums.size() == 0)
            return ans;
        
        stack<int>s;
        s.push(0);
       
        
        for(int i=1;i<nums.size();i++){
            while(!s.empty() && nums[s.top()] < nums[i]){
                ans[s.top()] = nums[i];
                s.pop();
            }
            s.push(i);
        }
        
        int j = s.top();
        
        for(int i=0;i<j;i++){
            while(!s.empty() && nums[s.top()] < nums[i]){
                ans[s.top()] = nums[i];
                s.pop();
            }
        }
        
        while(!s.empty()){
            ans[s.top()] = -1;
            s.pop();
        }
        
        return ans;
        
    }
};