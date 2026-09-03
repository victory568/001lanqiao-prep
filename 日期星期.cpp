#include<iostream>
using namespace std;
int main(){
	int mon,day;
	cin>>mon>>day;
	int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int total=0;
	for(int i=1;i<mon;++i)total+=month[i];
	total+=day-1;
	int week=(total+3)%7;
	cout<<week<<endl;
	return 0;
}
