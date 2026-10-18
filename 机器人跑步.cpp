#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int getSum(int num){
	int s=0;
	while(num){
		s+=num%10;
		num/=10;
	}
	return s;
}
int movingCount(int m,int n,int k){
	vector<vector<bool> >vis(m,vector<bool>(n,false));
	queue<pair<int,int>>q;
	q.push({0,0});
	vis[0][0]=true;
	int cnt=0;
	int dx[]={-1,0,1,0};
	int dy[]={0,-1,0,1};
	while(!q.empty()){
	pair<int,int>cur=q.front();
	q.pop();
	int x=cur.first;
	int y=cur.second;
	cnt++;
	for(int d=0;d<4;d++){
		int nx=x+dx[d];
		int ny=y+dy[d];
		if(nx>=0&&nx<m&&ny>=0&&ny<n&&!vis[nx][ny]&&getSum(nx)+getSum(ny)<=k){
			vis[nx][ny]=true;
			q.push({nx,ny});
		}
	    }
    }
    return cnt;
}
int main(){
	int m,n,k;
	cin>>m>>n>>k;
	cout<<movingCount(m,n,k)<<endl;
	return 0;
}

















