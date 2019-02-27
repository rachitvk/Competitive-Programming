#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
      int n,k;
      cin >> n >> k;
      
      int prefix[100010]={0};
      int queries[n+1][2];
      
      for(int i=0;i<n;i++){
          int l,r;
          cin >> l >> r;
          
          queries[i][0]=l;
          queries[i][1]=r;
          
          prefix[l]+=1;
          prefix[r+1]-=1;
      }
      
      for(int i=1;i<=100000;i++){
          prefix[i]+=prefix[i-1];
      }
      
     // for(int i=0;i<=11;i++)
       // cout << prefix[i] << " ";
        //cout << endl;
        
      int arr[100010]={0};
      int brr[100010]={0};
      
      
      int c=0,d=0;
      
     

      for(int i=1;i<=100010;i++){
          if(prefix[i]==k){
              arr[i]=arr[i-1]+1;
              brr[i]=brr[i-1];
              c++;
          }else if(prefix[i]==k+1){
              brr[i]=brr[i-1]+1;
              arr[i]=arr[i-1];
              d++;
          }else{
               brr[i]=brr[i-1];
               arr[i]=arr[i-1];
          }
      }
      
       brr[0]=0;
      
 
  
      int mx=0;
      
      for(int i=0;i<n;i++){
          int l=queries[i][0];
          int r=queries[i][1];
          
          
          mx=max(mx,c-(arr[r]-arr[l-1])+brr[r]-brr[l-1]);
      }
      
      cout << mx << endl;
      
    }
}