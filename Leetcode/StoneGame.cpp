class Solution {
public:
    
    int dp[501][501];
    
    int Stones(int start,int end,vector<int>& arr){
        
        
        if(start==end)
            return arr[start];
        if(start>end)
            return 0;
        
        if(dp[start][end]!=-1)
                return dp[start][end];
        
        
        dp[start][end]=max(arr[start]+min(Stones(start+1,end-1,arr),Stones(start+2,end,arr)),
                  
                    arr[end]+min(Stones(start+1,end-1,arr),Stones(start,end-2,arr)));
        
        return dp[start][end];
    }
    
    bool stoneGame(vector<int>& arr) {
        
        memset(dp,-1,sizeof dp);
        int sum=0;
        
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        
        int alex=Stones(0,arr.size()-1,arr);
        
        cout << alex << endl;
        
        return(alex>sum/2);
        
        
    }
};