class Solution {
public:
    bool divisorGame(int N) {
        bool dp[N+1]={false};
        
        
        for(int i=2;i<=N;i++){
            bool flag=0;
            for(int j=1;j<=sqrt(i);j++){
                if(i%j==0 && dp[i-j]==0){
                    flag=true;
                }
            }
            dp[i]=flag;
        }
        
        return dp[N];
        
    }
};