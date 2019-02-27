<<<<<<< HEAD
class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        
        int r=grid.size();
        int c=grid[0].size();
    
        
        int top[r+1]={0};
        int left[c+1]={0};
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                top[i]=max(top[i],grid[i][j]);
                left[j]=max(left[j],grid[i][j]);
            }
        }
    
        int ans=0;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                ans+=min(top[j],left[i])-grid[i][j];
            }
        }
        
        return ans;
    }
=======
class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        
        int r=grid.size();
        int c=grid[0].size();
    
        
        int top[r+1]={0};
        int left[c+1]={0};
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                top[i]=max(top[i],grid[i][j]);
                left[j]=max(left[j],grid[i][j]);
            }
        }
    
        int ans=0;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                ans+=min(top[j],left[i])-grid[i][j];
            }
        }
        
        return ans;
    }
>>>>>>> 20843e6664516c6814c0e970cfafb680d978dfd5
};