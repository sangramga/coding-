#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<map>
using namespace std;

bool flag = true;
struct node
{
	int data; 
	struct node* left;
	struct node* right;
};
struct node* newNode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}
int identicalTree(struct node* node1,struct node* node2)
{
	if(node1==NULL&&node2==NULL)
		return 1;
	if(node1!=NULL&&node2!=NULL)
	{
		 identicalTree(node1->left,node2->left)&&
		 identicalTree(node1->right,node2->right);
	}
		return 0;
}
int main()
{
	struct node *root1 = newNode(1);
	struct node *root2 = newNode(1);
	root1->left = newNode(2);
	root2->left = newNode(2);
	root1->right = newNode(3);
	root2->right = newNode(3);
	root1->left->left= newNode(4);
	root2->left->left= newNode(4);
	if(identicalTree(root1,root2))
		cout<<"Both trees are identical"<<endl;
	else
		cout<<"Both trees are not identical"<<endl;
	return 0;
}
