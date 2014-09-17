#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cassert>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
void push(struct node** head_ref, int data)
{
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = data;
	new_node = (*head_ref);
	*head_ref = new_node;
	return ;
}
void print(struct node *node )
{
	while(node!=NULL)
	{
		printf("%d ",node->data);
		node = node->next;
	}
	cout<<endl;
	return ;
}

int main()
{
	struct node* head = NULL;
	int n,tmp;
	cin>>n;
	while(n--)
	{
		cin>>tmp;
		push(&head,tmp);
	}
	print(head);
	        return 0;
}

