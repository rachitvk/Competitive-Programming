class Solution {
public:
    vector<int> countBits(int num) {
        int pilot=1;
        
        vector<int>arr(num+1,0);
        
      
        arr[0]=0;
        
        if(num==0)
            return arr;
        
        arr[pilot]=1;
        
        for(int i=1;i<=num;i++){
           
            if(i>=pilot*2){
                pilot*=2;
                arr[pilot]=1;
            }else{
                arr[i]=1+arr[i-pilot];
            } 
        }
        
        return arr;
    }
};