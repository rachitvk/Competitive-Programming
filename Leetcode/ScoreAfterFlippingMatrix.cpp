class Solution {
public:
    int matrixScore(vector<vector<int>>& arr) {
        int r=arr.size();
        int c=arr[0].size();
        
        for(int i=0;i<r;i++){
            if(arr[i][0]==1){
                for(int j=0;j<c;j++){
                    arr[i][j]=1-arr[i][j];
                }
            }
        }
        
        int ans=0;
        
        for(int i=0;i<c;i++){
            int cost=0;
            for(int j=0;j<r;j++){
                if(arr[j][i]==0)
                    cost+=pow(2,c-(i+1));
                else
                    cost-=pow(2,c-(i+1));
            }
            if(cost>0){
                for(int k=0;k<r;k++){
                    arr[k][i]=1-arr[k][i];
                }
            }
        }
        
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++)
                    if(arr[j][i]==1)ans+=pow(2,c-(i+1));
        }
        
        return ans;
    }
};