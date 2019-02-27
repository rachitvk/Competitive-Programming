class Solution {
public:
    vector<int> diStringMatch(string s) {
        
        vector<int>ans;
        int i=0,mx=0,n=s.length();
        
        if(s[0]=='D'){
            int j=1;
           while(j<n && s[j]=='D')
                j++;
            int k=j;
            while(i<k){
                ans.push_back(j--),
                i++;
            }
            ans.push_back(j--);
            mx=i;
        }else{
            ans.push_back(0);
        }
        mx++;
        
        
        
        while(i<n){
            if(s[i]=='I'){
                int j=i+1;
                while(j<n && s[j]=='D'){
                    mx++;
                    j++;
                }
                
            int k=mx;
            
            while(i<j){
                ans.push_back(k);
                k--;
                i++;
            }
          }
            mx++;
        }
        return ans;
    }
};