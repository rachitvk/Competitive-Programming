#include<bits/stdc++.h>
using namespace std;


int n,q;
int l[5002],r[5002];
int p1[5010],p2[5010],p3[5010];

int solve(int painter){
    
   memset(p1,0,sizeof(p1));
   memset(p2,0,sizeof(p2));
    
    for(int i=0;i<q;i++){
        if(i==painter)continue;
        
        p1[l[i]]++;
        p1[r[i]+1]--;
    }
 
    
    for(int i=1;i<=n;i++)
        p1[i]+=p1[i-1];
        
 
        
    for(int i=1;i<=n;i++){
        p2[i]+=p2[i-1]+(p1[i]==1?1:0);
    }
    
    int res=INT_MAX;
    
    for(int i=0;i<q;i++){
        if(i!=painter)
        res=min(res,p2[r[i]]-p2[l[i]-1]);
    }
    
    
    for(int i=0;i<=n;i++){
        if(p1[i]==0)
            res++;
    }
    
    return n-res;
}

int main(){
    
    cin >> n >> q;
    
    
    for(int i=0;i<q;i++){
        cin >> l[i] >> r[i];
    }
    
    int ans=-1;
    
    for(int i=0;i<q;i++){
       
        ans=max(ans,solve(i));
        
    }
    
    cout << ans+1 << endl;
}