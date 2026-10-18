#include<iostream>
#include<vector>
using namespace std;
void dfs(vector<vector<char> > &grid,int x,int y){
	if(x<0||x>=grid.size()||y<0||y>=grid[0].size()||grid[x][y]!='1'){
		return;
	}
	grid[x][y]='0';
	dfs(grid,x-1,y);
	dfs(grid,x+1,y);
	dfs(grid,x,y-1);
	dfs(grid,x,y+1);
}
int numIslands(vector<vector<char> >&grid){
	int cnt=0;
	int x=grid.size();
	if(x==0)return 0;
	int y=grid[0].size();
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			grid[i][j];
			if(grid[i][j]=='1'){
				cnt++;
				dfs(grid,i,j);
			}
		}
	}
	return cnt;
}
int main()
{
    vector<vector<char>> grid = {
        {'1','1','0','0','0'},
        {'1','1','0','0','0'},
        {'0','0','1','0','0'},
        {'0','0','0','1','1'}
    };
    cout << numIslands(grid) << endl;
    return 0;
}







