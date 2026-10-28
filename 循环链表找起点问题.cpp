#include<iostream>
using namespace std;
struct ListNode{
	int val;
	ListNode*next;
	ListNode(int x):val(x),next(nullptr){}
};
		ListNode*detectCycle(ListNode*head){
			ListNode*slow=head;
			ListNode*fast=head;
			while(fast!=nullptr&&fast->next!=nullptr){
				slow=slow->next;
				fast=fast->next->next;
				if(slow==fast){
					ListNode*p=head;
					while(p!=slow){
						p=p->next;
						slow=slow->next;
					}
					return p;
				}
			}
			return nullptr;
}
int main() {
    ListNode* n1 = new ListNode(1);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(3);
    ListNode* n4 = new ListNode(4);
    ListNode* n5 = new ListNode(5);
    ListNode* n6 = new ListNode(6);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = n3;
    ListNode* ans = detectCycle(n1);
    if (ans) {
        cout << "环入口节点val = " << ans->val << endl;
    } else {
        cout << "没有环" << endl;
    }
    return 0;
}
