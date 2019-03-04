class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>s;
        
        int i=0;
        int n=pushed.size();
        int j=0;
        
        while(i<n){
            while(!s.empty() && s.top()==popped[j]){
                s.pop();j++;
            }
            s.push(pushed[i]);
            i++;
        }
       
        while(!s.empty() && s.top()==popped[j]){
                s.pop();j++;
            }
       
        return (s.empty());
    }
};