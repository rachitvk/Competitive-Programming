class Solution {
public:
    
    static bool comp(vector<int>& a,vector<int>& b){
        return a[0] < b[0];
    }
    
    int videoStitching(vector<vector<int>>& clips, int T) {
        
        sort(clips.begin(),clips.end(),comp);
        
        int n = clips.size();
        
        if(clips[0][0] != 0)
            return -1;
        
        int dp[n+1];
        
        memset(dp,1000000,sizeof(dp));
        
        dp[0] = 1;
        
        for(int i=1;i<n;i++){

            if(clips[i][0] == 0){
                dp[i] = 1;
                continue;
            }
            for(int j=i-1;j>=0;j--){
                
                if(clips[i][0] > clips[j][0] && clips[i][0] <= clips[j][1] && clips[i][1] > clips[j][1] && dp[j]!=-1){
                    dp[i] = min(dp[i],dp[j]);
                }
            }
            
            if(dp[i] == 1000000)
                dp[i] = -1;
            else
                dp[i]++;
        }
        
        
        int ans = INT_MAX;
        
        for(int i=0;i<n;i++){
            if(clips[i][1] >= T)
                ans = min(ans,dp[i]);
        }
                
        if(ans == 1077952577 || ans == INT_MAX)
            return -1;
        return ans;
    }
};