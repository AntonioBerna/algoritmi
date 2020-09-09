#include <iostream>
#include <list>
using namespace std;

class Graph{
	int v;
	list<int> *adj;
	void Traverse(int v, bool visited[]);
public:
	Graph(int v);
	void addEdge(int v, int w);
	void DFS(int v);
};

Graph::Graph(int v){
	this->v = v;
	adj = new list<int>[v];
}

void Graph::addEdge(int v, int w){
	adj[v].push_back(w);
}

void Graph::DFS(int v){
	bool *visited = new bool[v];
	for(int s = 0; s < v; s++){
		visited[s] = false;
	}
	Traverse(v, visited);
}

void Graph::Traverse(int v, bool visited[]){
	visited[v] = true;
	cout << v << " ";

	list<int>::iterator i;
	for(i = adj[v].begin(); i != adj[v].end(); ++i){
		if(!visited[*i]){
			Traverse(*i, visited);
		}
	}
}

int main(){

	Graph g(7);

	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(0, 3);
	g.addEdge(1, 4);
	g.addEdge(1, 5);
	g.addEdge(2, 6);
	g.addEdge(5, 3);

	g.DFS(0);

	return 0;
}
