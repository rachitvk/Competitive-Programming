class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>ans;
        
        if(nums1.size() == 0 || nums2.size() == 0)
            return ans;
        
        stack<int>s;
        s.push(nums2[0]);
        
        unordered_map<int,int>mp;
        
        for(int i=1;i<nums2.size();i++){
            while(!s.empty() && s.top() < nums2[i]){
                mp[s.top()] = nums2[i];
                s.pop();
            }
            
            s.push(nums2[i]);
        }
        
        while(!s.empty()){
            mp[s.top()] = -1;
            s.pop();
        }
        
        for(int i=0;i<nums1.size();i++)
            ans.push_back(mp[nums1[i]]);
        
        return ans;
    }
};