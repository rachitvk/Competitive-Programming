class Solution {
public:
    int climbStairs(int n) {
        
        if(n==1)
            return 1;
        
        int second = 1;
        int first = 2;
        
        for(int i=n-2;i>=1;i--){
            int temp = first + second;
            second = first;
            first = temp;
        }
        
        return first;
        
    }
};