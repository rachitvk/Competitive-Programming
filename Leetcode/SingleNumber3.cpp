class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x=0;
        vector<int>ans;
        
        for(int i=0;i<nums.size();i++)
            x^=nums[i];
        
        int flag=0;
        
        int j=0,a=1;
        
        while(flag==0){
            j++;
            flag=a&x;
            a*=2;
        }
        
        a/=2;
    
        int x1=0,x2=0;
        
        
        
        for(int i=0;i<nums.size();i++){
            
            bool c=nums[i]&a;            
            if(c==0)
                x1^=nums[i];
            else
                x2^=nums[i];
        }
        
        ans.push_back(x1);
        ans.push_back(x2);
        
        return ans;
    }
};