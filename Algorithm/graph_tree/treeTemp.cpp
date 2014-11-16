#include<iostream>
#include<stdlib.h>
using namespace std;
struct adjListNode{
	int dest;
	struct adjListNode *next;
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
struct adjListNode* newadjListNode(int dest)
{
	struct adjListNode *node = (struct adjListNode*)malloc(sizeof(struct adjListNode));
	node->dest = dest;
	node->next = NULL;
		return node;
}
struct graph* createGraph(int V)
{
	struct graph *graph = (struct graph*)malloc(sizeof(struct graph));
	graph->V = V;
	graph->array = (struct adjList*)malloc(V*sizeof(struct adjList));
	for(int i =0;i<V;i++)
		graph->array[i].head = NULL;
	return graph;
}
void addEdge(struct graph *graph,int src, int dst)
{
	struct adjListNode* node = newadjListNode(dst);
	node->next = graph->array[src].head;
	graph->array[src].head = node;
	//since undirected graph
	node = newadjListNode(src);
	node->next = graph->array[dst].head;
	graph->array[dst].head = node;
}

void printGraph(struct graph *graph)
{
	for(int v =0;v<graph->V;v++)
	{
		struct adjListNode *crawl = graph->array[v].head;
		cout<<v<<" ";
		while(crawl)
		{
			cout<<crawl->dest<<" ";
			crawl= crawl->next;
		}
		cout<<endl;
	}
}
int main()
{
	  int V = 5;
	      struct graph* graph = createGraph(V);
	          addEdge(graph, 0, 1);
		      addEdge(graph, 0, 4);
		          addEdge(graph, 1, 2);
			      addEdge(graph, 1, 3);
			          addEdge(graph, 1, 4);
				      addEdge(graph, 2, 3);
				          addEdge(graph, 3, 4);
					   
					      // print the adjacency list representation of the above graph
					          printGraph(graph);
	return 0;
}
