#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
	  cin.tie(NULL);
   int n,m;
   cin >> n >> m;
   
   int arr[n+1];
   
   map<pair<int,int>,int>mp;
   
   for(int i=0;i<n;i++){
       cin >> arr[i];
   }
   
   int nastya=arr[n-1];
   
   for(int j=0;j<m;j++){
       int a,b;
       cin >> a >> b;
       pair<int,int>pr=make_pair(a,b);
       mp[pr]=1;
   }
   
   stack<int>s1,s2;
   
   for(int j=n-1;j>=0;j--){
       
          
           while(!s1.empty() && mp.find(make_pair(arr[j],s1.top()))!=mp.end()){
                s2.push(s1.top());
                s1.pop();
           }
           
            s1.push(arr[j]);
            

            
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
            
   }
   int j=1,x;
   while(!s1.empty()){
      // cout << s1.top() << endl;
       if(s1.top()==nastya)
            x=j;
        s1.pop();
        j++;
   }
   
   cout << n-x << endl;
}
