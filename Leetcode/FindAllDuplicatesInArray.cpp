class Solution {
public:
    
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int>ans;
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            int org=arr[i]%(n+1);
            arr[org-1]+=(n+1);
            if(arr[org-1]/(n+1)==2)
                ans.push_back(org);
        }
        
        return ans;
    }
};