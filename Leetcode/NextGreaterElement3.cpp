class Solution {
public:
    int nextGreaterElement(int n) {
        
        string s = to_string(n);
    
        next_permutation(s.begin(),s.end());
        
        auto res = stoll(s);
        
        return (res > INT_MAX || res <= n) ? -1 : res;
        
        
    }
};