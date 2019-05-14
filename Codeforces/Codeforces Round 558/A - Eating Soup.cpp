#include<bits/stdc++.h>
using namespace std;

#define print(a) cout << a << endl

int main(){
    int n,c;
    cin >> n >> c;
    
    (c == 0) ? print(1) : (c<=n/2) ? print(c) : print(n%c) ;
}