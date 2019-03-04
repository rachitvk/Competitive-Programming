class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        
        int i=1;
        int n=A.size();
        if(n<3)
            return 0;
        int c=1;
        int ans=0;
        
        int diff=A[1]-A[0];
        
        while(i<n-1){
           if(A[i+1]-A[i]==diff)
               c++;
            else{
                diff=A[i+1]-A[i];
                c=1;
            }
            if(c>=2)
                ans+=c-2+1;
            i++;
        }
        
        return ans;
    }
};