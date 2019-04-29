class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        
        unordered_set<int>s;
        int n = arr.size();
        
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        
        int ans = 0;
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int first = arr[i];
                int second = arr[j];
                int next = first + second;
                
                int c = 2;
                
                while(s.find(next)!=s.end()){
                  int temp = next;
                  next = next+second;
                  first = second;
                  second = temp;   
                  c++;
                }
                
                ans = max(ans,c);
            }
        }
        
        if(ans == 2)
            return 0;
        
        return ans;
        
    }
};