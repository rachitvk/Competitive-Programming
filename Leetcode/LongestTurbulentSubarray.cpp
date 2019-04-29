class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int n = arr.size();
        
        int dp[n+1];
        
        if(n == 1)
            return 1;
        if(n == 2){
            if(dp[0] == dp[1])
                return 1;
            else
                return 2;
        }
            
        
        dp[0] = 1;
        
        if(dp[0] == dp[1])
            dp[1] = 1;
        else
            dp[1] = 2;
            
        int ans = 0;
        
        for(int i=2;i<n;i++){
            if((arr[i]>arr[i-1] && arr[i-1]<arr[i-2]) || (arr[i]<arr[i-1] && arr[i-1]>arr[i-2]))
            dp[i] = dp[i-1]+1;
            
            else if(arr[i] == arr[i-1])
                dp[i] = 1;
            else
                dp[i] = 2;
            
            ans = max(ans,dp[i]);
        }
        
        return ans;
    }
};