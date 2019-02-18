class Solution {
public:
    bool judgeCircle(string s) {
        
        int l=0,u=0;
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='L')l--;
            if(s[i]=='R')l++;
            if(s[i]=='U')u++;
            if(s[i]=='D')u--;
        }
        
        return (l==0 && u==0);
    }
};