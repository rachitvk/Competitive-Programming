class Solution {
public:
    string longestPalindrome(string s) {
        
        int n=s.length();
        int ans=0;
        string p;
        
        for(int i=0;i<=2*n-1;i++){
            int left=i/2;
            int right=left+i%2;
            int c=0;
            
            while(left>=0 && right<n && s[left]==s[right]){
                left--;
                right++;
            }
            
            left++;
            right--;
            c=right-left+1;
                    
           if(ans<c){
               p=s.substr(left,c);
               ans=c;
           }
        }
        
        return p;
        
    }
};