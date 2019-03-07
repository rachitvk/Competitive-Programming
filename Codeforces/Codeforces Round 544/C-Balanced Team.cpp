#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n+1];
    
    for(int i=0;i<n;i++)
        cin >> arr[i];
        
    sort(arr,arr+n);
    
    int ans=INT_MIN;
    
    int i=0,j=0;
    
    while(i<n && j<n){
        int diff=arr[j]-arr[i];
        if(diff<=5){
            ans=max(ans,j-i+1);
            j++;
        }
        else{
            while(diff>5){
                i++;
                diff=arr[j]-arr[i];
            }
        }
    }
    
    
    cout << ans << endl;
}