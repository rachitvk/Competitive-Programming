#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
       int n;
       cin >> n;
       
       int arr[n+1];
       
       for(int i=0;i<n;i++){
           cin >> arr[i];
       }
       
       sort(arr,arr+n);
       
       int i=0;
       while(i<n && i>=arr[i]){
           i++;
       }
       
       cout << i << endl;
    }
}
