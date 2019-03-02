class Solution {

public:
    
    int ans=0;
    int c=0;
    int visited[1000][1000]={0};
    
    bool issafe(int p,int q,vector<vector<int>>& grid){
        return (p>=0 && p<grid.size() && q>=0 && q<grid[0].size());
    }
    
    void dfs(int u,int v,vector<vector<int>>& grid){
        
         visited[u][v]=1;
         int a[]={0,0,1,-1};
         int b[]={1,-1,0,0};
         c++;
        
        for(int i=0;i<4;i++){
            int p=u+a[i];int q=v+b[i];
            
            if(issafe(p,q,grid) && visited[p][q]==0 && grid[p][q]==1){
                dfs(p,q,grid);
            }
        }
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(!visited[i][j] && grid[i][j]==1){
                    c=0;
                    dfs(i,j,grid);
                    ans=max(ans,c);
                }
            }
        }
        
        return ans;
    }
};