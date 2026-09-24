#include<iostream>
#include<vector>
using namespace std;
int findMin(vector<int>& nums){
	int l=0;
	int r=nums.size()-1;
	while(l<r){
		int mid=(r+l)/2;
		if(nums[mid]>nums[r]){
			l=mid+1;
		}
		else if(nums[mid]<nums[r]){
			r=mid;
		}
		else{
			r--;
		}
	}
	return nums[l];
}
int main(){
	vector<int>nums;
	int x;
	while(cin>>x){
		nums.push_back(x);
	}
	cout<<findMin(nums)<<endl;
	return 0;
}
