class Solution {
public:
    int longestOnes(vector<int>& A, int K) {
        vector<int>zeroes;
        
        zeroes.push_back(-1);
        
        int z=0;
        
        for(int i=0;i<A.size();i++){
           
            if(A[i]==0){
                z++;
                zeroes.push_back(i);
            }
        }
        
        K=min(z,K);
        
        zeroes.push_back(A.size());
        int ans=-1;
        
        
        for(int i=K+1;i<zeroes.size();i++){
            ans=max(ans,zeroes[i]-zeroes[i-(K+1)]-1);
        }
        
        return ans;
    }
};