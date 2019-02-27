<<<<<<< HEAD
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){
             if(s[i]>='A' && s[i]<='Z')
              s[i]+=32;
        }
              
        return s;
    }
=======
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){
             if(s[i]>='A' && s[i]<='Z')
              s[i]+=32;
        }
              
        return s;
    }
>>>>>>> 20843e6664516c6814c0e970cfafb680d978dfd5
};