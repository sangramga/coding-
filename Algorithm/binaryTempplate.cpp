#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
struct node {
		int data;
		struct node *left;
		struct node *right;
};
struct node* newnode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
return node;
}
int main()
{
	struct node *root = newnode(1);
	return 0;
}
