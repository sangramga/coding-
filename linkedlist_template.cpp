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
map<int , int >map1;
struct node 
{
	int data;
	struct node* next;
};
void push(struct node** head_ref, int data)
{
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = data;
	new_node->next = NULL;
	if(*head_ref == NULL)
	{
		*head_ref = new_node;
		return ;
	}
	new_node->next = *head_ref;
	*head_ref = new_node;
	return ;
}
void print(struct node* node)
{
	while(node!=NULL)
	{
		cout<<node->data<<" ";
		node= node->next;
	}
	cout<<endl;
	return ;
}
int main()
{
return 0;
}
