#include<iostream>
#include<stdlib.h>
using namespace std;
struct adjListNode 
{
	int dst;
	struct adjListNode* next;
};
struct adjList
{
	struct adjListNode *head;
};
struct graph
{
	int V;
	struct adjList *array;
};
struct graph* createGraph(int V)
{
	struct graph* graph = (struct graph*)malloc(sizeof(struct graph));
	graph->V = V;
	graph->array = (struct adjList*)malloc(V*sizeof(struct adjList));
	for(int i =0;i<V;i++)
		graph->array[i].head = NULL;
	return graph;
}
struct adjListNode* newEdge(int dst)
{
	struct adjListNode* node = (struct adjListNode*)malloc(sizeof(struct adjListNode));
	node->dst = dst;
	node->next = NULL;
	return node;
}
void addEdge(struct graph* graph, int src, int dst)
{
	struct adjListNode* node = newEdge(dst);
	node->next = graph->array[src].head;
	graph->array[src].head = node;
	//undirected
	node = newEdge(src);
	node->next = graph->array[dst].head;
	graph->array[dst].head = node;
}
void printGraph(struct graph* graph)
{
	for(int i =0;i<graph->V;i++)
	{
		struct adjListNode* node = graph->array[i].head;
		cout<<"Vertex "<<i;
		while(node)
		{
			cout<<" "<<node->dst;
			node = node->next;
		}
		cout<<endl;}
}


int main()
{
	int V ;
	cin>>V;
	struct graph* graph = createGraph(V);
	int i ,j;
	while(true)
	{
		cin>>i>>j;
		if(i==-1)
			break;
		addEdge(graph,i,j);
	}
	printGraph(graph);
	return 0;
}
