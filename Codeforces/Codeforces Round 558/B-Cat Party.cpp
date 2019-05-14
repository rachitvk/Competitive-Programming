#include<bits/stdc++.h>
using namespace std;

#define print(a) cout << a << endl
#define __ {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}

const int N = 1e5 + 10;

int cnt[N],f[N];

int main(){
   __;
   int n;
   cin >> n;
   
   int mx = 0;
   int ans;
   
   for(int i=1;i<=n;i++){
       int color;
       cin >> color;
       
       cnt[f[color]]--;
       f[color]++;
       cnt[f[color]]++;
       
       mx = max(mx,f[color]);
       
       bool ok = false;
       
       if(cnt[i] == 1)
         ok = true;
       else if(cnt[1] == i)
         ok = true;
       else if(cnt[mx]*mx == i-1 && cnt[1] == 1)
         ok = true;
       else if(cnt[mx-1]*(mx-1) == i-mx && cnt[mx] == 1)
         ok = true;
         
        if(ok)
            ans = i;
   }
   
    print(ans);
}