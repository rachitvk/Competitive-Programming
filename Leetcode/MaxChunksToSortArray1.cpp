class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int ans=0;
        
        int last=-1;
        int mx=-1;
        int mn=0;
        
        for(int i=0;i<arr.size();i++){
            mx=max(mx,arr[i]);
            
        
            if(mx-mn+1 == (i-last)){
                ans++;
                mn=i+1;
                last=i;
            }
        }
        
        return ans;
    }
};