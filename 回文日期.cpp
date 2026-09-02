#include<iostream>
#include<string>
using namespace std;
bool is_leap(int y){
	if(y%400==0)return true;
	if(y%100==0)return false;
	if(y%4==0)return true;
	else return false;
}
int is_day(int y,int m){
	while(m==2) {
		if(is_leap(y))return 29;
		return 28;
	}
	if(m==4||m==6||m==9||m==11){
		return 30;
	}
	return 31;
}
void next_day(int &y,int &m,int &d){
	d++;
	int maxd=is_day(y,m);
	if(d<=maxd)return;
	d=1;
	m++;
	if(m<=12)return;
	m=1;
	y++;
}
bool is_huiwen(string s){
	int l=0,r=s.size()-1;
	while(l<r){
		if(s[l]!=s[r])
		return false;
		l++;
		r--;
	}
	return true;
}
int main()
{
    int date;
    cin >> date;
    int y = date / 10000;
    int m = date /100 %100;
    int d = date %100;

    while(true)
    {
        next_day(y,m,d);
        char buf[20];
        sprintf(buf,"%04d%02d%02d",y,m,d);
        string s(buf);
        if(is_huiwen(s))
        {
            cout << s << endl;
            break;
        }
    }
    return 0;
}























