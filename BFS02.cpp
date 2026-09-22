#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct Node{
	int x,y;
};
int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<int> >g(n,vector<int>(m));
	vector<vector<bool> >vis(n,vector<bool>(m,false));
	int dx[]={-1,1,0,0};
	int dy[]={0,0,-1,1};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>g[i][j];
		}
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(g[i][j]==1&&!vis[i][j]){
				cnt++;
				queue<Node> q;
				Node start;
				start.x=i;
				start.y=j;
				q.push(start);
				vis[i][j]=true;
			    while(!q.empty()){
			    	Node cur=q.front();
			    	q.pop();
			    	for(int i=0;i<4;i++){
			    		int nx=cur.x+dx[i];
			    		int ny=cur.y+dy[i];
			    		if(nx>=0&&nx<n&&ny>=0&&ny<m){
			    			if(g[nx][ny]==1&&!vis[nx][ny]){
			    			vis[nx][ny]=true;
			    			Node next;
			    			next.x=nx;
			    			next.y=ny;
			    			q.push(next);
			    		    }
						}
					}
				}
			}
		}
	}
	cout<<cnt<<endl;
	return 0;
}





















