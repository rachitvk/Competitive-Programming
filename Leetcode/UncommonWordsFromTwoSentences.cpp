class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        
       int i=0,j=0;
        
        unordered_map<string,int>mp;
        vector<string>ans;
        
        while(i<A.length()){
            cout << i << endl;
            while(j<A.length() && A[j]!=' ')
                j++;
            mp[A.substr(i,j-i)]++;
            i=j;
            j++;
            i++;
        }
        
        i=0,j=0;
        
         while(i<B.length()){
            while(j<B.length() && B[j]!=' ')
                j++;
            mp[B.substr(i,j-i)]++;
            j++;
            i=j;
        }
        
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            if(itr->second==1)
                ans.push_back(itr->first);
        }
        
        return ans;
    }
};