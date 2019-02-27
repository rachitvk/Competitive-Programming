class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        
        int i=0,j=0;
        
        while(i<A.size()){
            if(A[i]%2==0)
                i+=2;
            else{
                while(A[j]%2==1  || (j%2==0 && j<i))
                    j++;
                swap(A[i],A[j]);
                i+=2;
            }
        }
        return A;
    }
};