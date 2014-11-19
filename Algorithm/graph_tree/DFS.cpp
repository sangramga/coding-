#include<iostream>
#include<list>
using namespace std;
class graph
{
	int V;
	list<int> *adj;
	void DFSutil(int v, bool visited[]);
	public :
		graph(int V);
		void addEdge(int src, int dst);
		void DFS();
};
graph :: graph(int V)
{
	this-> V = V;
	adj = new list<int>[V];
}
void graph::addEdge(int src, int dst)
{
//	cout<<"Edge Added"<<endl;
	adj[src].push_back(dst);
}
void graph::DFSutil(int v, bool visited[])
{
//	cout<<"DFS util "<<endl;
	visited[v] = true;
	cout<<v<<" ";
	list<int>::iterator i;
	for(i = adj[v].begin();i!=adj[v].end();i++)
		if(!visited[*i])
			DFSutil(*i,visited);
}
void graph::DFS()
{
	cout<<"DFS"<<endl;
	bool *visited = new bool[V];
	for(int i =0;i<V;i++)
		visited[i] = false;
	for(int i =0;i<V;i++)
	{
		if(visited[i] == false)
		{	DFSutil(i,visited);
		cout<<endl;
		}
	}
}
int main()
{
	int V;
	cin>>V;
	graph g(V);
	int src =0,dst =0;
	while(true)
	{
		cin>>src>>dst;
		if(src>=0)
			g.addEdge(src, dst);
		else
			break;
	}
	cout<<"HEllo"<<endl;
	g.DFS();
}
