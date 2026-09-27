#include<iostream>
#include<vector>
using namespace std;

bool findNumberIn2DArray(vector<vector<int> > &matrix, int target)
{
    int n = matrix.size();
    if(n == 0) return false; // ∑¿÷πø’æÿ’Û matrix[0]±®¥Ì
    int m = matrix[0].size();
    int x = 0;
    int y = m - 1;
    while(x < n && y >= 0){
        int cur = matrix[x][y];
        if(cur == target){
            return true;
        }else if(cur > target){
            y--;
        }else{
            x++;
        }
    }
    return false;
}

int main(){
    vector<vector<int> > mat = {
        {1,4,7,11},
        {2,5,8,12},
        {3,6,9,16}
    };
    int t;
    cin >> t;
    if(findNumberIn2DArray(mat,t)){
        cout<<"¥Ê‘⁄"<<endl;
    }else{
        cout<<"≤ª¥Ê‘⁄"<<endl;
    }
    return 0;
}




















