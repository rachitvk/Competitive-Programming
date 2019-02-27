<<<<<<< HEAD
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0,high=arr.size()-1;
        int mid=(low+high)/2;
        
        while(low<high){
            
            mid=(low+high)/2;
              cout << low << " " << high << " " << mid << endl;
            
            if(mid==low){
                if(arr[mid]>arr[mid+1])
                    return mid;
                else
                    return mid+1;
            }else if(mid+1==arr.size()){
                if(arr[mid]>arr[mid+1])
                    return mid;
                else
                    return mid+1;
            }else if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
               
                return mid;
            }
            else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
               // cout << "Yes" << endl;
                low=mid+1;
            }
            else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1]){
               //  cout << "Yes" << endl;
                 high=mid-1;
            }
        }
        return low;
    }
=======
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0,high=arr.size()-1;
        int mid=(low+high)/2;
        
        while(low<high){
            
            mid=(low+high)/2;
              cout << low << " " << high << " " << mid << endl;
            
            if(mid==low){
                if(arr[mid]>arr[mid+1])
                    return mid;
                else
                    return mid+1;
            }else if(mid+1==arr.size()){
                if(arr[mid]>arr[mid+1])
                    return mid;
                else
                    return mid+1;
            }else if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
               
                return mid;
            }
            else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
               // cout << "Yes" << endl;
                low=mid+1;
            }
            else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1]){
               //  cout << "Yes" << endl;
                 high=mid-1;
            }
        }
        return low;
    }
>>>>>>> 20843e6664516c6814c0e970cfafb680d978dfd5
};