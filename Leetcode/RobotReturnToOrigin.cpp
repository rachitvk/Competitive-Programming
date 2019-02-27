<<<<<<< HEAD
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
=======
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
>>>>>>> 20843e6664516c6814c0e970cfafb680d978dfd5
};