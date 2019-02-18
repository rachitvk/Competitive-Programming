class Solution {
public:
  
    string customSortString(string S, string T) {
        
        vector<char>v;
        
        int count[30]={0};
        
       for(int i=0;i<T.length();i++){
           count[T[i]-'a']++;
       }
        
        for(int i=0;i<S.length();i++){
            for(int j=0;j<count[S[i]-'a'];j++)
                v.push_back(S[i]);
            count[S[i]-'a']=0;
        }
        
        for(int i=0;i<26;i++){
            for(int j=0;j<count[i];j++)
                v.push_back(i+'a');
        }
        
        string s(v.begin(),v.end());
        return s;
    }
};