<<<<<<< HEAD
class Solution {
public:
    int minAddToMakeValid(string S) {
        int sum=0;
        int ans=0;
        
        for(int i=0;i<S.length();i++){
            if(S[i]=='('){
                sum++;
            }else{
                if(sum==0)
                    ans++;
                else
                    sum--;
            }
        }
        return ans+sum;
    }
=======
class Solution {
public:
    int minAddToMakeValid(string S) {
        int sum=0;
        int ans=0;
        
        for(int i=0;i<S.length();i++){
            if(S[i]=='('){
                sum++;
            }else{
                if(sum==0)
                    ans++;
                else
                    sum--;
            }
        }
        return ans+sum;
    }
>>>>>>> 20843e6664516c6814c0e970cfafb680d978dfd5
};