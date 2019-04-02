#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n+1];
    
    for(int i=0;i<n;i++)
        cin >> arr[i];
    
    sort(arr,arr+n);
    
    vector<int>a;
    vector<int>b;
    int cnt=1;
    bool flag=true;
    
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1])
            cnt++;
        else
            cnt=1;
        
        if(cnt == 3)
            flag=false;
    }
    
    if(flag == false){
        cout << "NO" << endl;
        return 0;
    }
    
    for(int i=0;i<n;i++){
        if(i%2)
            b.push_back(arr[i]);
        else
            a.push_back(arr[i]);
    }
    
    cout << "YES" << endl;
    
    cout << a.size() << endl;
    for(int i=0;i<a.size();i++)
        cout << a[i] << " ";
    cout << endl;
    
    cout << b.size() << endl;
    for(int i=b.size()-1;i>=0;i--)
        cout << b[i] << " ";
}