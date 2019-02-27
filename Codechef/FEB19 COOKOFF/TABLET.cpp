#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        long long ans=-1;
        
        long long n,b;
        cin >> n >> b;
        
        for(int i=0;i<n;i++){
            long long w,h,p;
            cin >> w >> h >> p;
            
            if(b>=p){
                ans=max(ans,w*h);
            }
        }
        
        if(ans!=-1)
        cout << ans << endl;
        else
        cout << "no tablet" << endl;
    }
}
