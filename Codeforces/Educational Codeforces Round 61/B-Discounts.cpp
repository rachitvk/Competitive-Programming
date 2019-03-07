#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   
   int arr[n+1];
   long long int sum=0;
   
   for(int i=0;i<n;i++){
    cin >> arr[i];
    sum+=arr[i];
   }
    
    sort(arr,arr+n);
    
    int m;
    cin >> m;
    
    int coupons[m+1];
    
    for(int i=0;i<m;i++){
        cin >> coupons[i];
    }
    
    for(int i=0;i<m;i++){
        cout << sum-arr[n-coupons[i]] << endl;
    }
}