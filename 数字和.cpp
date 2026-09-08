#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,S;
	cin>>n>>S;
	vector<int>dp(n+1,0);
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
	for(int i=n;i>=1;i--){
		if(dp[i]<dp[i-1]+a&&dp[i-1]+a<=S)
		dp[i]=dp[i-1]+a;
	  }
	}
	cout<<dp[n]<<endl;
	return 0;
}
