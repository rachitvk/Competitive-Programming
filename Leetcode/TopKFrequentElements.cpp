typedef pair<int, int> pi; 

class Solution {
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        int j=0;
        
        pair<int,int>pr[nums.size()];
        
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            pr[j++]=make_pair(itr->second,itr->first);
        }
          
        priority_queue<pi, vector<pi>, greater<pi> > pq;
        
        for(int i=0;i<j;i++){
           if(pq.size()<k)
               pq.push(pr[i]);
            else{
                if(pq.top().first < pr[i].first){
                    pq.pop();
                    pq.push(pr[i]);
                }
            }
        }
        
        vector<int>ans;
        
        while(!pq.empty()){
            pair<int,int>a=pq.top();
            pq.pop();
            ans.push_back(a.second);
        }
        
        return ans;
    }
};