#include<iostream>
#include<string>
using namespace std;
bool isNumber(string s){
	bool hasNum=false;
	bool hasDot=false;
	bool hasE=false;
	for(int i=0;i<s.size();i++){
		char c=s[i];
		if(c<='9'&&c>='0'){
			hasNum=true;
		}
		else if(c=='.'){
			if(hasDot||hasE){
				return false;
			}else{
				hasDot=true;
			}
		}
		else if(c=='E'||c=='e'){
			if(!hasNum||hasE){
				return false;
			}else{
				hasE=true;
				hasNum=true;
			}
		}
		else if(c=='+'||c=='-'){
			if(i!=0&&s[i-1]=='e'&&s[i-1]=='E'){
				return false;
			}
		}
		else{
			return false;
		}
	}
	return hasNum;
}
int main(){
    string str;
    cin >> str;
    cout << boolalpha << isNumber(str) << endl;
    return 0;
}




