class Solution {
    
   
public:   
    
    static bool comp(vector<int>& a, vector<int>& b){
        return a[0] < b[0];
    }
    
    int findLongestChain(vector<vector<int>>& pairs) {
        
        int n = pairs.size();
        
        int dp[n+1] = {0};
        
        if(n == 0)
            return 0;
        
        sort(pairs.begin(),pairs.end(),comp);
         
        for(int i=0;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(pairs[i][0] > pairs[j][1]){
                    dp[i] = max(dp[i],dp[j]);
                }
            }
            
            dp[i]++;
        }
        
        int ans = 0;
        
        for(int i=0;i<n;i++)
            ans = max(ans,dp[i]);
        
        return ans;
    }
};