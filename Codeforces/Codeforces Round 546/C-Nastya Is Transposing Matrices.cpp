#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    
    map<int,vector<int>>mp1,mp2;
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int a;
            cin >> a;
            mp1[i+j].push_back(a);
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int a;
            cin >> a;
            mp2[i+j].push_back(a);
        }
    }
    
    int flag=0;
    
    for(int i=0;i<=(n-1)+(m-1);i++){
        sort(mp1[i].begin(),mp1[i].end());
        sort(mp2[i].begin(),mp2[i].end());
        
        if(mp1[i]!=mp2[i])
            flag=1;
    }
    
    if(flag==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}