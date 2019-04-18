class Solution {
public:
    int binaryGap(int N) {
        
        int prev=-1;
        int ans=0;
        int x=N;
        
        for(int i=0;i<=32;i++){
            if(x&1){
                if(prev==-1)
                    prev=i;
                else{
                    ans=max(ans,i-prev);
                    prev=i;
                }
            }
            x>>=1;
        }
        
        return ans;
    }
};