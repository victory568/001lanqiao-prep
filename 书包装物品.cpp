#include<iostream>
#include<vector>
using namespace std;
int main(){
	int N,V;
	cin>>N>>V;
	vector<int>dp(V+1,0);
	for(int i=0;i<N;i++){
		int v,w;
		cin>>v>>w;
		for(int j=V;j>=v;j--){
			if(dp[j-v]+w>dp[j]){
				dp[j]=dp[j-v]+w;
			}
		}
	}
	cout<<dp[V]<<endl;
	return 0;
}
