#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int l[n+2],r[n+2];
    
    for(int i=1;i<=n;i++){
        cin >> l[i] >> r[i];
    }
    
    int k;
    cin >> k;
    
    for(int i=1;i<=n;i++){
        if(k>=l[i] && k<=r[i]){
            cout << n-i+1 << endl;
            break;
        }
    }
}