class Solution {
public:
    bool isValid(string S) {
        stack<char>s;
        
        int flag=0;
        
        for(int i=0;i<S.length();i++){
            if(S[i]=='c'){
                if(s.empty())
                    return false;
                else{
                    if(s.top()=='b'){
                        s.pop();flag=1;
                         if(s.empty())
                         return false;
                    }
                    if(flag==0)
                        return false;
                   else if(s.top()=='a' && flag==1)
                        s.pop();
                    else
                        return false;
                    flag=0;
                }
            }else
                s.push(S[i]);
        }
        
        return (s.empty());
    }
};