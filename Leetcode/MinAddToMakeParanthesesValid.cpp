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
};