class Solution {
public:
    int scoreOfParentheses(string s) {
        
        int ans=0;
        int multiplier=0;
        
        for(int i=0;i<s.length();i++){
                    
            if(s[i]=='(')
                multiplier++;
            else{
                multiplier--;
                if(s[i-1]=='(')
                    ans+=1 << multiplier;
            }
        }
        
        return ans;
    }
};