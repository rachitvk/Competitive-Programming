class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_set<int>s;
        unordered_set<int>t;
        
        
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        
        
        int ans=0;
        
        if(k<0)
            return 0;
        
        if(k==0){
           unordered_map<int,int>mp;
            
            for(int i=0;i<nums.size();i++){
                mp[nums[i]]++;
                if(mp[nums[i]]==2)
                    ans++;
            }
            return ans;
        }
        
        for(auto itr=s.begin();itr!=s.end();itr++){
            int c=*itr;
            
            if(t.find(c+k)!=t.end())
                ans++;
            if(t.find(c-k)!=t.end())
                ans++;
            t.insert(c);
        }
        
        return ans;
    }
};