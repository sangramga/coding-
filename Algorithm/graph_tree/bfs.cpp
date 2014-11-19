#include<iostream>
#include<list>
using namespace std;
class graph
{
	int V;
	list<int> *adj;
	public :
		graph(int V);
		void addEdge(int src, int dst);
		void BFS(int src);
};
graph :: graph(int V)
{
	this-> V = V;
	adj  = new list<int>[V];
}
void graph :: addEdge(int src, int dst)
{
	adj[src].push_back(dst);
}
void graph ::BFS(int src)
{
	bool *visited = new bool[V];
	for(int i =0;i<V;i++)
		visited[i]  = false;

	list<int>queue;
	queue.push_back(src);
	visited[src] = true;
	list<int>::iterator i;
	while(!queue.empty())
	{
		src = queue.front();
		cout<<src<<" ";
		queue.pop_front();
		for(i = adj[src].begin();i!=adj[src].end();i++)
		{
			if(!visited[*i])
			{
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}

int main()
{
	graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);			        
	cout << "Following is Breadth First Traversal (starting from vertex 2) \n";
	g.BFS(2);
	cout<<endl;
	return 0;
}
