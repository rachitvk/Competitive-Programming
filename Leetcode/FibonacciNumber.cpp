class Solution {
public:
    int fib(int N) {
        int first=0;
        int second=1;
        
        int i=2;
        
        if(N==0)
            return first;
        if(N==1)
            return second;
        
        while(i<N){
            int next=first+second;
            first=second;
            second=next;
            i++;
        }
        
        return first+second;
    }
};