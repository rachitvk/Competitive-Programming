#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >> t;

    while(t--){
	    int d;
	    cin >> d;
	    
	    int arr[32]={0};
	    
	    for(int i=0;i<d;i++){
	        int di,pi;
	        cin >> di >> pi;
	        
	        arr[di]+=pi;
	    }
	    
	    for(int i=1;i<=31;i++){
	        arr[i]+=arr[i-1];
	    }
	    
	    int q;
	    cin >> q;
	    
	    for(int i=0;i<q;i++){
	        int di,ri;
	        cin >> di >> ri;
	        
	        if(arr[di]<ri)
	            cout << "Go Sleep" << endl;
	        else
	            cout << "Go Camp" << endl;
	    }

	}
}