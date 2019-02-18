class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        
        int l=0,r=arr.size()-1;
        
        while(l<r){
            if(arr[l]%2){
                swap(arr[l],arr[r]);
                r--;
            }else{
                l++;
            }
        } 
        return arr;
    }
};