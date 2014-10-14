#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data ;
	struct node* left;
	struct node* right;
};
struct node* newNode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data  =data;
	node->left = NULL;
	node->right = NULL;
	return node;
}
void deleteTree(struct node* node)
{
	if(node==NULL)
		return ;
	deleteTree(node->left);
	deleteTree(node->right);
	int data = node->data;;
	cout<<"node to be deleted is : "<<node->data<<endl;
	free(node);
}
	
int main()
{
	struct node* root = newNode(1);
	root->right = newNode(2);
	root->left = newNode(3);
	root->right->right = newNode(4);
	root->right->left = newNode(5);
	deleteTree(root);
	return 0;
	
}
