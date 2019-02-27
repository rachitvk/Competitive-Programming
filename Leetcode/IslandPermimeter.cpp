class Solution {
    
    static bool issafe(int i,int j,vector<vector<int>>& grid){
        int r=grid.size();
        int c=grid[0].size();
        
        return(i>=0 && i<r && j>=0 && j<c);
    }
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        
        int ans=0;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==0)
                        continue;
                if(!issafe(i-1,j,grid) || grid[i-1][j]==0)
                    ans++;
                if(!issafe(i,j-1,grid) || grid[i][j-1]==0)
                    ans++;
                if(!issafe(i,j+1,grid) || grid[i][j+1]==0)
                    ans++;
                if(!issafe(i+1,j,grid) || grid[i+1][j]==0)
                    ans++;
            }
        }
        return ans;
    }
};