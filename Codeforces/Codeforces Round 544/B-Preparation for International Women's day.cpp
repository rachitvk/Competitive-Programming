#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    
    unordered_map<int,int>mp;
    
    for(int i=0;i<k;i++)
        mp[i]=0;
    
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
    
        mp[a%k]++;
    }
    
    long long int ans=0;
    
    ans+=(mp[0]-mp[0]%2);
    
    if(n==1){
        cout << 0 << endl;
        return 0;
    }
    
    
    
    for(int i=1;i<k/2;i++){
       
        int x=min(mp[i],mp[k-i]);
        ans+=x*2;
    }
    
    if(k%2){
       int x=min(mp[k/2],mp[k/2+1]);
       ans+=x*2;;
    }
    else
        ans+=mp[k/2]-mp[k/2]%2;
    
    cout << ans << endl;
    
}