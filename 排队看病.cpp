#include<iostream>
#include<queue>
using namespace std;
struct Node{
	int pri;
	int id;
	Node(int pri,int id):pri(pri),id(id){}
	bool operator<(const Node &b) const
	{
		if(pri!=b.pri)
		return pri<b.pri;
		return id>b.id;
	}
};
int main(){
	priority_queue<Node> q[4];
	string op;
	int doc,val;
	int cnt=0;
	while(cin>>op){
		if(op=="IN"){
			cin>>doc>>val;
			cnt++;
			q[doc].push(Node(val,cnt));
		}
		else if(op=="OUT"){
			cin>>doc;
			if(q[doc].empty())
			cout<<-1<<endl;
			else{
				cout<<q[doc].top().id<<endl;
				q[doc].pop();
			}
		}
	}
	return 0;
}










