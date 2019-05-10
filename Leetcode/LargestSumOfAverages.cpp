class Solution {
public:
    double largestSumOfAverages(vector<int>& A, int K) {
        
        vector<double>P(A.size()+1);
        vector<double>dp(A.size()+1,0);
        int n = A.size();
        
        for(int i=0;i<n;i++){
            P[i+1] = P[i]+A[i];
        }
        
        for(int i=0;i<n;i++){
            dp[i] = (P[n]-P[i])/(n-i);
        }
        
        for(int i=0;i<K-1;i++){
            for(int j=0;j<n;j++){
                for(int k=j+1;k<n;k++){
                    dp[j] = max(dp[j],(P[k]-P[j])/(k-j)+dp[k]);
                }
            }
        }
        
        return dp[0];
    }
};