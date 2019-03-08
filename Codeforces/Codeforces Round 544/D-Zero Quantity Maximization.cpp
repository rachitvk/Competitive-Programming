#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<long double,int>mp;
    
    int n;
    cin >> n;
    
    int a[n+1],b[n+1];
    
    for(int i=0;i<n;i++)
        cin >> a[i];
        
    for(int i=0;i<n;i++)
        cin >> b[i];
        
        int c=0;
        
    for(int i=0;i<n;i++){
        
        if(a[i]==0 && b[i]==0){
            c++;
            continue;
        }
        
        if(a[i]==0)
            continue;
        mp[(long double)((long double)b[i]/(long double)a[i])]++;
    }
    
    int ans=0;
    
    for(auto itr=mp.begin();itr!=mp.end();itr++){
     //   cout << itr->first << " " << itr->second << endl;
        ans=max(ans,itr->second);
    }
        
    cout << ans+c << endl;
}