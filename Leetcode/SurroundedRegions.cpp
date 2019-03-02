class Solution {
public:
    
    int ans=0;
    int visited[1000][1000]={0};
    
    bool issafe(int p,int q,vector<vector<char>>& grid){
        return (p>=0 && p<grid.size() && q>=0 && q<grid[0].size());
    }
    
    void dfs(int u,int v,vector<vector<char>>& grid){
        
         visited[u][v]=1;
         grid[u][v]='F';
         int a[]={0,0,1,-1};
         int b[]={1,-1,0,0};
        
        for(int i=0;i<4;i++){
            int p=u+a[i];int q=v+b[i];
            
            if(issafe(p,q,grid) && visited[p][q]==0 && grid[p][q]=='O'){
                dfs(p,q,grid);
            }
        }
    }
    
    void solve(vector<vector<char>>& board) {
        
        
        int r=board.size();
        if(r==0)
            return;
        int c=board[0].size();
        
        
        for(int i=0;i<c;i++){
            if(!visited[0][i] && board[0][i]=='O')
                dfs(0,i,board);
        }
        
        for(int i=0;i<c;i++){
            if(!visited[r-1][i] && board[r-1][i]=='O')
                dfs(r-1,i,board);
        }
        
        for(int i=0;i<r;i++){
            if(!visited[i][0] && board[i][0]=='O')
                dfs(i,0,board);
        }
        
        for(int i=0;i<r;i++){
            if(!visited[i][c-1] && board[i][c-1]=='O')
                dfs(i,c-1,board);
        }
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='O')
                    board[i][j]='X';
                else if(board[i][j]=='F')
                    board[i][j]='O';
            }
        }
          
    }   
    
};