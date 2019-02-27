class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int>ans;
        
        for(int i=left;i<=right;i++){
            int org=i;
            int num=i;
            int flag=0;
            while(num>0){
                int r=num%10;
                if(r==0 || org%r!=0){
                    flag=1;
                    break;
                }
                num=num/10;
            }
            if(!flag)
                ans.push_back(i);
        }
        return ans;
    }
};