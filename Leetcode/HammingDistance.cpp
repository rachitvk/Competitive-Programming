<<<<<<< HEAD
class Solution {
public:
    int hammingDistance(int x, int y) {
        int i=31,ans=0;
        int xr =x^y;
        
        while(i>=0){
            ans+=(xr&1);
            xr>>=1;
            i--;
        }
        return ans;
    }
=======
class Solution {
public:
    int hammingDistance(int x, int y) {
        int i=31,ans=0;
        int xr =x^y;
        
        while(i>=0){
            ans+=(xr&1);
            xr>>=1;
            i--;
        }
        return ans;
    }
>>>>>>> 20843e6664516c6814c0e970cfafb680d978dfd5
};