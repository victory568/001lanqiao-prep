#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	int val;
	struct Node*right;
	struct Node*left;
}Node;
Node*createNode(int v){
	Node*p=(Node*)malloc(sizeof(Node));
	p->val=v;
	p->right=NULL;
	p->left=NULL;
	return p;
}
int dfs(Node*root){
	if(root==NULL){
		return 0;
	}
	int right_depth=dfs(root->right);
	int left_depth=dfs(root->left);
	int max_d=right_depth>left_depth?right_depth:left_depth;
	return max_d+1;
}
int main(void)
{
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);

    printf("%d\n", dfs(root));

    return 0;
}
