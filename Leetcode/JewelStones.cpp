class Solution {
public:
    int numJewelsInStones(string J, string S) {
       vector<int>v(200,0);
        
        for(int i=0;i<J.length();i++){
            v[J[i]]++;
        }
        
        int ans=0;
        
        for(int i=0;i<S.length();i++){
            if(v[S[i]]==1)
                ans++;
        }
        return ans;
    }
};