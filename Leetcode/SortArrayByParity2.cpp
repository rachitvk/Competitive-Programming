<<<<<<< HEAD
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
=======
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
>>>>>>> 20843e6664516c6814c0e970cfafb680d978dfd5
};