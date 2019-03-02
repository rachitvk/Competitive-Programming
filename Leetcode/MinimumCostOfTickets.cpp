class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& cost) {
        
        int dp[366]={0};
        
        int hash[366]={0};
        
        for(int i=0;i<days.size();i++)
            hash[days[i]]=1;
        
        for(int i=1;i<=365;i++){
             int x,y,z;
            if(hash[i]){
                x=cost[0]+dp[i-1];
                
                y=cost[1]+dp[max(0,i-7)];
            
                z=cost[2]+dp[max(0,i-30)];
                
                dp[i]=min(x,min(y,z));
            }else{
                 x=dp[i-1];
                
                
                dp[i]=x;
            }
        }    
        return dp[365];
    }
};