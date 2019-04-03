#include<bits/stdc++.h>
using namespace std;

vector<int>get(string s){
    vector<int>ans(s.length()+2);
    
    for(int i=1;i<=s.length();i++){
        ans[i]=s[i-1]-'a';
    }
    
    return ans;
}

int main(){
    int n;
    string s,t;
    cin >> n >> s >> t;
    
    vector<int>a = get(s),b=get(t);
    
    for(int i=n;i>=0;i--){
        a[i]+=b[i];
        
        if(i>0){
            a[i-1]+=a[i]/26;
            a[i]%=26;
        }
    }
    
    for(int i=0;i<=n;i++){
        int rem = a[i]%2;
        a[i]/=2;
        if(i+1<=n){
            a[i+1]+=rem*26;
        }
    }
    
    for(int i=1;i<=n;i++){
        cout << char('a'+ a[i]);
    }
}