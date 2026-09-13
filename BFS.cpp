#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct Node{
	int x,y,step;
};
int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<int> >g(n,vector<int>(m));
	vector<vector<bool> >vis(n,vector<bool>(m,false));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>g[i][j];
		}
	}
	int dx[]={-1,1,0,0};
	int dy[]={0,0,-1,1};
	queue<Node> q;
	q.push({0,0,0});
	vis[0][0]=true;
	while(!q.empty()){
		Node cur=q.front();
		q.pop();
		if(cur.x==n-1&&cur.y==m-1){
			cout<<cur.step<<endl;
			return 0;
		}
		for(int i=0;i<4;i++){
			int nx=cur.x+dx[i];
			int ny=cur.y+dy[i];
			if(nx>=0&&nx<n&&ny>=0&&ny<m&&g[nx][ny]==0&&!vis[nx][ny]){
				vis[nx][ny]=true;
				q.push({nx,ny,cur.step+1});
			}
		}
	}
	cout<<-1<<endl;
}





















