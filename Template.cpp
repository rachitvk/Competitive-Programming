#include<bits/stdc++.h>
using namsespace std;

#define INF 1000000001
#define MOD 1000000007
#define mp make_pair
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pr(a,n) for(int i=0;i<a.size();i++){cout << a[i] << " "; cout << endl;}
#define ip(a,n) for(int i=0;i<n;i++){int x; cin >> x; a.pu(x);}
#define loop(n) for(int i=0;i<n;i++)
#define maximum(a) int mx = INT_MIN; for(int i=0;i<a.size();i++){mx=min(mx,a[i])};
#define minimum(a) int mn = INT_MAX; for(int i=0;i<a.size();i++){mn=max(mn,a[i])};
#define sum(a) int sum=0; for(int i=0;i<a.size();i++){sum+=a[i]};
#define __ {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}

int gcd(int a,int b){
    if(a==0)
        return b;
    return gcd(b%a,a);
}

void constructlps(string pat,int *lps){
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while (i < pat.length())
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len-1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

int main(){
    __;
}
