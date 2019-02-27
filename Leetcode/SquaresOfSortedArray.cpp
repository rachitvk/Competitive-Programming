class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int>ans;
        
        int i=0;
        
       while(i<A.size() && A[i]<=0){
            i++;
        }
        
        int j=i-1;
        
      //  cout << i << " " << j << endl;
        
        while(j>=0 || i<A.size()){
            if(j<0){
                ans.push_back(A[i]*A[i]);
                i++;
            }else if(i>=A.size()){
                ans.push_back(A[j]*A[j]);
                j--;
            }else{
                if(abs(A[j])<A[i]){
                     ans.push_back(A[j]*A[j]);
                     j--;
                }else{
                    ans.push_back(A[i]*A[i]);
                    i++;
                }
            }
        }
        return ans;
    }
};