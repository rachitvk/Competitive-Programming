#include <iostream>
using namespace std;

int N,K;

int main(){
	cin>>N>>K;
	cout<<3*N+min(K-1,N-K);
}