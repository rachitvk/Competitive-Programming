class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        
        if(n==0)
            return 1;
        
        int dp[n+1];
        
        dp[1]=10;
        int x = 9;
        int m = 9;
        
        for(int i=2;i<=n;i++){
            
            if(m == 0){
                 dp[i]= dp[i-1];
                 continue;
            }
               
            dp[i] = dp[i-1]+x*m;
            x = x*m;
            m--;
        }
        
        return dp[n];
    }
};