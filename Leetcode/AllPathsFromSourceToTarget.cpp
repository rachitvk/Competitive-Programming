class Solution {
public:
    
    vector<vector<int>>ans;
    vector<int>path;
    
    void dfs(int u,int d,vector<vector<int>>& graph){
        if(u==d){
            path.push_back(u);
            ans.push_back(path);
            path.pop_back();
            return;
        }
        
        path.push_back(u);
        
        for(int i=0;i<graph[u].size();i++){
            int v=graph[u][i];
          //  path.push_back(v);
            dfs(v,d,graph);
            //path.pop_back();
        }
        path.pop_back();
        return;
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        dfs(0,graph.size()-1,graph);
        return ans;
    }
};