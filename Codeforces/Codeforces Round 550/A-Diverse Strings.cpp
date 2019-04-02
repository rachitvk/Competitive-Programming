#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    
    while(t--){
        string s;
        cin >> s;
        
        int hash[200]={0};
        
        int mn=1000;
        int mx=-1;
        int flag=0;
        
        for(int i=0;i<s.length();i++){
            if(hash[s[i]-'a']==1){
                flag=1;
            }
            
            hash[s[i]-'a']=1;
            mn=min(mn,s[i]-'a');
            mx=max(mx,s[i]-'a');
        }
        
        if(flag == 1){
            cout << "No" << endl;
            continue;
        }
        
        if(mx-mn+1 == s.length())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}