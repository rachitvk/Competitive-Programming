class Solution {
public:
    
    int ans = 0;
    
    void helper(vector<int>& arr,int i, int n, int S){
      //  cout << i << " " << n << endl;
        if(i>=arr.size() && n==S){
            ans++;
            return;
        }
        
        if(i>=arr.size())
            return;
        
        helper(arr,i+1,n+arr[i],S);
        helper(arr,i+1,n-arr[i],S);
            
    }
    
    int findTargetSumWays(vector<int>& nums, int S) {
        helper(nums,0,0,S);
        return ans;
    }
};