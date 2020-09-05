import java.io.*;
import java.util.*;

public class Graph {
    private int V;
    private LinkedList<Integer> adj[];

    Graph(int v){
        V = v;
        adj = new LinkedList[v];

        for(int i = 0; i < v; i++){
            adj[i] = new LinkedList();
        }
    }

    void addEdge(int v, int w){
        adj[v].add(w);
    }

    void Traverse(int v, boolean[] visited){
        visited[v] = true;
        System.out.print(v + " ");

        for (int n : adj[v]) {
            if (!visited[n]) {
                Traverse(n, visited);
            }
        }
    }

    void DFS(int v){
        boolean[] visited = new boolean[V];
        Traverse(v, visited);
    }

    public static void main(String[] args) {
        Graph g = new Graph(4);

        g.addEdge(0, 1);
        g.addEdge(0, 2);
        g.addEdge(1, 2);
        g.addEdge(2, 0);
        g.addEdge(2, 3);
        g.addEdge(3, 3);

        g.DFS(2);
    }
}
