class Solution {
public:
    
    int minFallingPathSum(vector<vector<int>>& arr) {
        int n=arr.size();
        
       for(int i=n-2;i>=0;i--){
           for(int j=0;j<n;j++){
               
               int x,y,z;
               x=y=z=INT_MAX;
               
               if(j-1>=0)
                   x=arr[i+1][j-1];
               if(j+1<n)
                   y=arr[i+1][j+1];
               z=arr[i+1][j];
               
               arr[i][j]+=min(x,min(y,z));
           }
       }
        
        int ans=INT_MAX;
        
        for(int i=0;i<n;i++){
            ans=min(ans,arr[0][i]);
        }
        
        return ans;
    }
};