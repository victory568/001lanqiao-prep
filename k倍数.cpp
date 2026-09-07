#include<iostream>
using namespace std;
typedef long long ll;
const int MAXN=10010;
ll s[MAXN];
ll cnt[MAXN];
int main(){
	int n,k;
	cin>>n>>k;
	s[0]=0;
	cnt[0]=1;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		s[i]=(s[i-1]+a)%k;
		cnt[s[i]]++;
	}
	ll ans=0;
	for(int i=0;i<k;i++){
		ans+=cnt[i]*(cnt[i]-1)/2;
	}
	cout<<ans<<endl;
	return 0;
}
