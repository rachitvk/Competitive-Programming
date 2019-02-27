<<<<<<< HEAD
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int ans=0;
        
        for(int i=0;i<nums.size();i+=2){
            ans+=nums[i];
        }
        
        return ans;
    }
=======
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int ans=0;
        
        for(int i=0;i<nums.size();i+=2){
            ans+=nums[i];
        }
        
        return ans;
    }
>>>>>>> 20843e6664516c6814c0e970cfafb680d978dfd5
};