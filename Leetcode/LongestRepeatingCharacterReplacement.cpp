class Solution {
public:
    
    unordered_map<int,vector<int>>mp;
    
    int helper(vector<int>& zeroes,int K){
        
        int z=zeroes.size();
         
        K=min(z-2,K);
        
        int ans=-1;
        
        for(int i=K+1;i<zeroes.size();i++){
            ans=max(ans,zeroes[i]-zeroes[i-(K+1)]-1);
        }
        
        return ans;
    }
    
    int characterReplacement(string s, int k) {
        
        for(int i=0;i<26;i++)
            mp[i].push_back(-1);
        
        for(int i=0;i<s.length();i++){
            int idx=s[i]-'A';
            for(int j=0;j<26;j++){
                if(j==idx)
                    continue;
                mp[j].push_back(i);
            }
        }
        
        for(int i=0;i<26;i++)
            mp[i].push_back(s.size());
        
        int ans=0;
        
        for(int i=0;i<26;i++){
            vector<int>v=mp[i];
            ans=max(ans,helper(v,k));
        }
        return ans;
    }
};