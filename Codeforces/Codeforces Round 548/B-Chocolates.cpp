#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    int arr[n+1];
    
    for(int i=0;i<n;i++)
        cin >> arr[i];
        
    int mn=arr[n-1];
    
    long long ans=arr[n-1];
    
    for(int i=n-2;i>=0;i--){
        if(arr[i]>=mn){
           ans+=max(0,mn-1);
           mn=max(0,mn-1);
        }else{
            ans+=arr[i];
            mn=arr[i];
        }
    }
    
    cout << ans << endl;
}