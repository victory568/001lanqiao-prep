#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	vector<int>dp(n+1,1);
		for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
				if(a[i]>a[j])
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
	int ans=0;
	for(int k=0;k<n;k++){
		ans=max(ans,dp[k]);
	}
	cout<<ans<<endl;
	return 0;
}
