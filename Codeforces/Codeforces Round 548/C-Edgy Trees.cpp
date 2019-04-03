#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007 

long long cnt=0;
vector<int>adj[200011];

long long power(long long x, long long y)
{
    long long res = 1;    
    x = x % MOD;  
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % MOD;
        y = y>>1;
        x = (x*x) % MOD;
    }
    return res;
}


void dfs(int u,bool *visited){
    visited[u]=true;
    cnt++;
    
    for(int i=0;i<adj[u].size();i++){
       
        int v=adj[u][i];
        
        if(!visited[v]){
            dfs(v,visited);
        }
    }
}

int main(){
    int n,k;
    cin >> n >> k;
    
    bool visited[n+10]={false};
    
    for(int i=0;i<n-1;i++){
        int u,v,c;
        cin >> u >> v >> c;
        
        
        if(c==0){
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }
    
    int ans=0;
    int p=0;
    
    long long a = power(n,k);
    
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            cnt=0;
            p++;
            dfs(i,visited);
            ans=power(cnt,k);
            a-=ans;
            a+=MOD;
            a%=MOD;
        }
    }
    
    if(p==1){
        cout << 0 << endl;
        return 0;
    }
    
   cout << a << endl;
    
}