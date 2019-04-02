#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int>even,odd;
    
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        
        if(x%2)
            odd.push_back(x);
        else
            even.push_back(x);
    }
    
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    
    long long ans = 0;
    
    if(odd.size() > even.size()){
        int n= odd.size()-even.size()-1;
        for(int i=0;i<n;i++)
            ans+=odd[i];
        
    }else if(odd.size()<even.size()){
        int n= even.size()-odd.size()-1;
        for(int i=0;i<n;i++)
            ans+=even[i];
    }else{
        ans=0;
    }
    
    cout << ans << endl;
}