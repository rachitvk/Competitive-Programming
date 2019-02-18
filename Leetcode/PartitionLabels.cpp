class Solution {
    
public: 
    static bool comp(pair<int,int>a,pair<int,int>b){
        if(a.first < b.first)
            return true;
        return false;
     }
    
public:
    
    vector<int> partitionLabels(string s) {
        vector<int>ans;
        pair<int,int> hash[27];
      
        for(int i=0;i<26;i++){
            hash[i]=make_pair(-1,-1);
        }
        
        for(int i=0;i<s.length();i++){
            int index=s[i]-'a';
           
            if(hash[index].first==-1){
                hash[index]=make_pair(i,i);
            }else{
                hash[index].second=i;
            }
        }
        
        pair<int,int>arr[27];
        int j=0;
        
        for(int i=0;i<26;i++){
            if(hash[i].first!=-1){
                arr[j]=hash[i];
                j++;
            }
        }
        
        sort(arr,arr+j,comp);
        
        pair<int,int>curr;
        curr=arr[0];
        
        
        for(int i=1;i<j;i++){
            if(arr[i].first > curr.second ){
                ans.push_back(curr.second-curr.first+1);
                curr=arr[i];
            }else if(arr[i].second > curr.second){
                curr.second=arr[i].second;
            }else
                continue;
        }
        ans.push_back(curr.second-curr.first+1);  
        return ans;
    }
};