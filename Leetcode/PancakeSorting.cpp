class Solution {
public:
    vector<int> pancakeSort(vector<int>& A) {
        vector<int>ans;
        
        for(int i=0;i<A.size();i++){
            int mp=max_element(A.begin(),A.end()-i)-A.begin();
            ans.push_back(mp+1);
            ans.push_back(A.size()-i);
            reverse(A.begin(),A.begin()+mp+1);
            reverse(A.begin(),A.end()-i);
        }
                
        return ans;
    }
};