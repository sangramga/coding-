#include<iostream>
#include<vector>
#include<list>
using namespace std;
class graph
{
	int V ;
	vector<int> *adj;
	void DFSutil(int v, bool visited[]);
	public :
		graph(int V);
		void addEdge(int src, int dst);
		void BFS(int src);
		void DFS(int src);




};
graph:: graph(int V)
{
	this->V = V;
	adj = new vector<int>[V];
}
void graph::addEdge(int src, int dst)
{
	adj[src].push_back(dst);
}
void graph::BFS(int src)
{
	bool *visited = new bool[V];
	for(int i =0;i<V;i++)
		visited[i] =false;
	list<int>queue;
	visited[src] = true;
	queue.push_back(src);
	vector<int>::iterator i;
	while(!queue.empty())
	{
		src = queue.front();
		cout<<src+1<<" ";
		queue.pop_front();
		for(i= adj[src].begin();i!=adj[src].end();i++)
		{
			if(!visited[*i])
			{
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}
void graph:: DFSutil(int src, bool visited[])
{
	visited[src] = true;
	cout<<src+1<<" ";
	vector<int>::iterator i;
	for(i = adj[src].begin();i!=adj[src].end();i++)
		if(!visited[*i])
			DFSutil(*i,visited);
}
void graph::DFS(int src)
{
	bool *visited = new bool[V];
	for(int i =0;i<V;i++)
		visited[i] = false;
	DFSutil(src,visited);
}





int main()
{
	int t;
	cin>>t;
	for(int j =1;j<=t;j++)
	{
		int V;
		graph g (V);
		cin>>V;
		for(int i = 0;i<V;i++)
		{
			int tmp, m;
			cin>>tmp>>m;
			while(m--)
			{
				int dst;
				cin>>dst;
				g.addEdge(i, dst-1);
			}
		}
		int a ,b;
		                 cout<<"graph "<<j<<endl;
		while(true)
		{
			cin>>a>>b;
//			cout<<"A = "<<a<<" B = "<<b<<endl;
			if(a==0&&b==0)
				break;
			else if(b==0)
				g.DFS(a-1);
			else
				g.BFS(a-1);
			cout<<endl;
		}

	}
	return 0;
}
