class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
            int n=arr.size();
            vector<int>ans;
            stack<int>s;
        
            for(int i=n-1;i>=0;i--){
                while(!s.empty() && arr[s.top()]<=arr[i]){
                    s.pop();
                }
                if(s.empty()){
                    ans.push_back(0);
                    s.push(i);
                }else{
                    ans.push_back(s.top()-i);
                    s.push(i);
                }
            }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};