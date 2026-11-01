#include<iostream>
#include<vector>
using namespace std;
vector<int>printMatrix(vector<vector<int>>matrix){
	vector<int> res;
	if(matrix.empty()) return res;
	int top=0;
	int bottom=matrix.size()-1;
	int left=0;
	int right=matrix[0].size()-1;
	while(top<=bottom&&left<=right){
		for(int i=left;i<=right;i++)
			res.push_back(matrix[top][i]);
			top++;
		for(int i=top;i<=bottom;i++)
			res.push_back(matrix[i][right]);
			right--;
		if(top<=bottom){
		for(int i=right;i>=left;i--)
			res.push_back(matrix[bottom][i]);
			bottom--;
		}
		if(left<=right){
		for(int i=bottom;i>=top;i--)
		res.push_back(matrix[i][left]);
		left++;
	    }
	}
	return res;
}
int main()
{
    vector<vector<int>> mat = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    vector<int> ans = printMatrix(mat);
    for (int x : ans)
        cout << x << " ";
    return 0;
}















