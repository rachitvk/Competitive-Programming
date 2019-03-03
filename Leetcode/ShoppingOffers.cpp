class Solution {
public:
    
    map<vector<int>,int>dp;
    
    int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs) {
        
        int f=0;
        
        for(int i=0;i<needs.size();i++){
            if(needs[i]>0)
                f=1;
        }
        
        if(f==0)
            return 0;
        
        if(dp.find(needs)!=dp.end())
            return dp[needs];
        
        dp[needs]=100000;
        
        for(int i=0;i<special.size();i++){
            vector<int>temp=needs;
            int n=special[i].size();
            int flag=0;
            
            for(int j=0;j<n-1;j++){
                if(temp[j]-special[i][j]<0)
                    flag=1;
                else
                    temp[j]-=special[i][j];
            }
            
            if(flag==0)
            dp[needs]=min(dp[needs],special[i][n-1]+shoppingOffers(price,special,temp));
        }
        
        int sum=0;
        
        for(int i=0;i<needs.size();i++){
           sum+=needs[i]*price[i];
        }
        
        dp[needs]=min(dp[needs],sum);
        return dp[needs];
    }
};