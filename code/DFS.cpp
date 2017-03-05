/* this program allows input of a graph and then
 * traverses the graph depth first. It does this
 * by declaring a stack. Which has the top most
 * element as the completely un explored node of
 * the graph. Depth first uses recursive call of
 * the depth first function. Every time a node is
 * encountered it will see if all the adjacent
 * nodes of that node is visited or not. If all the
 * adjacent nodes are visited then this current node
 * is removed from the stack, else the first unvisited
 * adjacent node is visited by calling the function*/
#include <iostream>
#include <list>
class Graph {
    int V;
    std::list<int> *adj;
public:
    Graph(int w);
    void addEdge(int u,int v);
    void DFSUtil(int v,bool visited[]);
    void DFS(int v);
};
Graph::Graph(int w) {
    this->V=w;
    adj=new std::list<int>[w];
}
void Graph::addEdge(int u, int w) {
    adj[u].push_back(w);
}
void Graph::DFSUtil(int v, bool visited[]) {
    visited[v]=true;
    std::cout<<v<<" ";
    std::list<int>::iterator i;
    for(i=adj[v].begin(); i!=adj[v].end(); ++i) {
        if(!visited[*i]) {
            DFSUtil(*i,visited);
        }
    }
}
void Graph::DFS(int v) {
    bool *visited=new bool[V];
    for(int i=0; i<V; i++) {
        visited[i]=false;
    }
    DFSUtil(v,visited);
}
int main() {
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.addEdge(2,3);
    g.addEdge(3,3);
    g.DFS(2);
}
