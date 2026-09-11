#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<long long>b(n+2,0);
	for(int i;i<m;i++){
		int L,R,v;
		cin>>L>>R>>v;
		b[L]+=v;
		b[R+1]-=v;
	}
	long long now=0;
	for(int i=1;i<=n;i++){
		now+=b[i];
		cout<<now<<" ";
    }
    return 0;
}
