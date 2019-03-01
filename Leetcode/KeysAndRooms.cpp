class Solution {
public:
    
    bool visited[1001]={0};
    
    void dfs(int u,vector<vector<int>>& rooms){
        visited[u]=true;
        
        for(int i=0;i<rooms[u].size();i++){
            int v=rooms[u][i];
            if(!visited[v])
                dfs(v,rooms);
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        for(int i=0;i<rooms.size();i++){
            if(i!=0 && visited[i]==false)
                return false;
            else if(i==0)
                dfs(0,rooms);
            else
                continue;
        }
        
        return true;
    }
};