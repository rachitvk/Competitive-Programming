class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string p) {
    
        vector<string>ans;
        
        for(int i=0;i<words.size();i++){
            
            unordered_map<int,int>mp1,mp2;
            string s=words[i];
            bool flag=0;
            
            for(int j=0;j<p.length();j++){
                if(mp1[p[j]]==0 && mp2[s[j]]==0){
                    mp1[p[j]]=s[j];
                    mp2[s[j]]=p[j];
                }else{
                    if(mp1[p[j]]!=s[j] || mp2[s[j]]!=p[j])
                        flag=1;
                }
            }
                if(!flag)
                    ans.push_back(words[i]);
        }
        return ans;
    }
};