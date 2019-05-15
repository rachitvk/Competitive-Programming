include<bits/stdc++.h>
using namespace std;

#define inf 1000000001
#define MOD 1000000007
#define mp make_pair
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pr(a,n) for(int i=0;i<n;i++){cout << a[i] << " ";} cout << endl
#define ip(a,n) for(int i=0;i<n;i++){int x; cin >> x; a.pu(x);}
#define loop(i,n) for(int i=0;i<n;i++)
#define print(ans) cout << ans << endl;
#define maximum(a) int mx = INT_MIN; for(int i=0;i<a.size();i++){mx=min(mx,a[i])};
#define minimum(a) int mn = INT_MAX; for(int i=0;i<a.size();i++){mn=max(mn,a[i])};
#define sum(a) int sum=0; for(int i=0;i<a.size();i++){sum+=a[i]};
#define __ {ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}

int gcd(int a,int b){
    if(a==0)
        return b;
    return gcd(b%a,a);
}

string s,a,b;
int l,n,m;
const int C = 1001, M = 51, N = 51;
int dp[C][N][M];
int lps1[N];
int lps2[M];


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

int f(int pos, int ma, int mb){
    if(dp[pos][ma][mb] != inf){
        return dp[pos][ma][mb];
    }
    int ans = 0;
    int aaa = ma, bbb = mb;
    if(ma == (int)a.size()){
        ans++;
        ma = lps1[ma - 1];
    }
    if(mb == (int)b.size()){
        ans--;
        mb = lps2[mb - 1];
    }
    if(pos == (int)s.size()){
        return ans;
    }
    if(s[pos] != '*'){
        int ua = ma;
        int done = 0;
        while(done == 0){
            if(ua == 0){
                if(s[pos] == a[ua]){
                    done = 1;
                }
                break;
            }
            if(s[pos] == a[ua]){
                done = 1;
                break;
            }
            else{
                ua = lps1[ua - 1];
            }
        }
        int ub = mb;
        int done2 = 0;
        while(done2 == 0){
            if(ub == 0){
                if(s[pos] == b[ub]){
                    done2 = 1;
                }
                break;
            }
            if(s[pos] == b[ub]){
                done2 = 1;
                break;
            }
            else{
                ub = lps2[ub - 1];
            }
        }
        int na = ua + (done == 1), nb = ub + (done2 == 1);
        return dp[pos][aaa][bbb] = ans + f(pos + 1, na, nb);
    }
    else{
        int mm = -inf;
        for(int i = 0; i < 26; i++){
            s[pos] = 'a' + i;
            int ua = ma;
            int done = 0;
            while(done == 0){
                if(ua == 0){
                    if(s[pos] == a[ua]){
                        done = 1;
                    }
                    break;
                }
                if(s[pos] == a[ua]){
                    done = 1;
                    break;
                }
                else{
                    ua = lps1[ua - 1];
                }
            }
            int ub = mb;
            int done2 = 0;
            while(done2 == 0){
                if(ub == 0){
                    if(s[pos] == b[ub]){
                        done2 = 1;
                    }
                    break;
                }
                if(s[pos] == b[ub]){
                    done2 = 1;
                    break;
                }
                else{
                    ub = lps2[ub - 1];
                }
            }
            int na = ua + (done == 1), nb = ub + (done2 == 1);
            int temp = f(pos + 1, na, nb);
            mm = max(mm, temp);
            s[pos] = '*';
        }
        return dp[pos][aaa][bbb] = ans + mm;
    }
}

int32_t main(){
    
    __;
    cin >> s >> a >> b;
    constructlps(a,lps1);
    constructlps(b,lps2);

    for(int i = 0; i < C; i++){
        for(int j = 0; j < M; j++){
            for(int k = 0; k < M; k++){
                dp[i][j][k] = inf;
            }
        }
    }
    cout << f(0, 0, 0) << endl;
}