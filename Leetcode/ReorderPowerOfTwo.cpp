class Solution {
public:
    
    bool check(string s){
        int x=stoi(s);
        
        int cnt=0;
        
        for(int i=0;i<32;i++){
            if(x&1)
                cnt++;
            x>>=1;
        }
                
        return (cnt==1);
    }
    
    bool reorderedPowerOf2(int N) {
        string s=to_string(N);
        
        sort(s.begin(),s.end());
        
         if(s[0]!='0' && check(s))
                return true;
        
        while(next_permutation(s.begin(),s.end())){
            if(s[0]!='0' && check(s))
                return true;
        }
            return false;
    }
};