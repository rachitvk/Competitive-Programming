class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        
        vector<int>ans;
        int sum=0;
        
        for(int i=0;i<A.size();i++){
            if(A[i]%2==0)
                sum+=A[i];
        }
        
        
        for(int i=0;i<queries.size();i++){
            int index=queries[i][1];
            int val=queries[i][0];
          
            int bf=A[index];
            int af=A[index]+val;
            
            A[index]=af;
           
           
            if(af%2==0 && bf%2==0)
                sum+=(af-bf);
            else if((af%2==1 || af%2==-1) && bf%2==0)
                sum-=bf;
            else if(af%2==0 && (bf%2==1 || bf%2==-1))
                sum+=af;
            
           
            
            ans.push_back(sum);
        }
        
      return ans;
    }
};