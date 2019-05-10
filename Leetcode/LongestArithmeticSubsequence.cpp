class Solution {
public:
    unordered_map<int,vector<int>>mp;
    
    int check(int x,int curr){
        auto itr = mp[x];
        
        for(auto i=itr.begin();i!=itr.end();i++){
            if(*i>curr){
                return *i;
            }
        }
        
        return -1;
    }
    
    int longestArithSeqLength(vector<int>& arr) {
        
        for(int i=0;i<arr.size();i++){
            mp[arr[i]].push_back(i);
        }
        
        int ans = 1;
        
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                int cnt = 2;
                int curr = j;
                int diff = arr[j]-arr[i];
              
                
                while(mp.find(arr[curr]+diff)!=mp.end()){
                     curr  = check(arr[curr]+diff,curr);
                     if(curr == -1)
                         break;
                     cnt++;
                }
             
                
                ans = max(ans,cnt);
            }
        }
        
        return ans;

    }
};