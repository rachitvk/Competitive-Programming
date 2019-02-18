#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
      int n;
      cin >> n;
      
      string s;
      cin >> s;
      
      int lps[n+1];
       int len=0;
       lps[0]=0;
       
       int i=1;
       
      while(i<n){
         if(s[i]==s[len]){
            len++; 
            lps[i] = len; 
            i++; 
         }
         else 
        { 
            if (len != 0) { 
                len = lps[len - 1]; 
            } 
            else
            { 
                lps[i] = 0; 
                i++; 
            } 
        } 
      }
      
        int arr[n+2]={0};
      
        arr[0]=1;
        for(int i=1;i<n;i++){
            int k=i;
            while(lps[k]!=0){
                int j=lps[k];
                arr[j]++;
                k=j-1;
            }
            
        }
        
        int mx=0,l;
        
      for(int i=1;i<=n;i++){
          if(arr[i]>=mx){
             l=i;
             mx=arr[i];
          }
      }
      
      cout << s.substr(0,l) << endl;
      
    }
}