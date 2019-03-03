class Solution {
public:
    
    static bool comp(pair<int,int>a,pair<int,int>b){
        return (a.second > b.second);
    }
    
    string frequencySort(string s) {
        
        int arr[130]={0};
        
        for(int i=0;i<s.length();i++){
            arr[s[i]]++;
        }
        
        pair<int,int>p[130];
        
        for(int i=0;i<130;i++){
            p[i]=make_pair(i,arr[i]);
        }
        
        sort(p,p+130,comp);
        
        vector<char>v;
        
        for(int i=0;i<130;i++){
            for(int j=0;j<p[i].second;j++){
                v.push_back(p[i].first);
            }
        }
        
        string ans(v.begin(),v.end());
        return ans;
        
    }
};