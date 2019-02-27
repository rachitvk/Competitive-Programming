#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define f(i,a,b) for(int i=a;i<b;i++)

int main(){
    int t;
    cin >> t;
    
    while(t--){
        string s;
        cin >> s;
        
        int l=s.length();
        ll mi=0,total;
        
        vector<ll>arr(100005);
        
        arr[0]=1;
        
        f(i,1,100005){
            arr[i]=(arr[i-1]*10)%MOD;
        }
        
        f(i,0,l){
            mi+=((s[i]-'0')*arr[l-i-1])%MOD;
        }
        mi = mi%MOD;
       // cout << mi << endl;
        total=mi;
        
        f(i,0,s.length()-1){
            mi=(((mi*10)%MOD+(s[i]-'0'))%MOD-((s[i]-'0')*arr[l])%MOD)%MOD;
             if(mi<0)
                mi+=MOD;
            total=((total*arr[l])%MOD+mi)%MOD;
            
           
        }
        
        total%=MOD;
        cout << total << endl;
        
        
    }
}