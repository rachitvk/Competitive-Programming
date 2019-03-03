class Solution {
public:
    int lengthOfLIS(vector<int>& arr) {
        
        int n=arr.size();
        if(n==0)
            return 0;
        
        int dp[n+2]={0};
        dp[0]=1;
        
        for(int i=1;i<n;i++){
            int mx=0;
            for(int j=i-1;j>=0;j--){
                if(arr[j]<arr[i])
                 mx=max(mx,dp[j]);
            }
              dp[i]=1+mx;
        }
        
        int ans=0;
        
        for(int i=0;i<n;i++)
           ans=max(ans,dp[i]);
        
        return ans;
    }
};