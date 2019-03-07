#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1,s2;
    
    cin >> s1 >> s2;
    
    int h1=stoi(s1.substr(0,2));
    int h2=stoi(s2.substr(0,2));
    
    int m1=stoi(s1.substr(3,2));
    int m2=stoi(s2.substr(3,2));
    
    int m=(60-m1)+m2+(h2-h1-1)*60;
    m/=2;
    int curr=m1;
    
    while(m>0){
        
        if(60-curr<m){
            h1++;
            m-=(60-curr);
            curr=0;
        }else{
            curr+=m;
            if(curr==60)
                h1++;
            m=0;
        }
    }
    
    if(curr==60)
        curr=0;
    
    string h=to_string(h1);
    string b=to_string(curr);
    
    if((curr/10)==0){
        b="0"+b;
    }
    
    if((h1/10)==0)
        h="0"+h;
        
    cout << h << ":" << b << endl;
}