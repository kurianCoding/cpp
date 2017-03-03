#include<iostream>
#include<list>
using namespace std;
class Graph {
    int V;//number of vertices of the graph
    list<int> *adj;//pointer to an array containing ad
public:
    Graph(int v);//consturctor funtion
    void addEdge(int v ,int w);//function to add an edge to the graph
    void BFS(int s);// function to do breadth first search
};
Graph::Graph(int V) {
    this->V=V;//the number of nodes intialised
    adj=new list<int>[V];//the list containing the pointers to adj initialised
}
void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);//adding an edge
}
void Graph::BFS(int s) {
    //initialise an array of length as number of
    //nodes. initialise all entries to false, si
    //gnifying that no node has been visited.
    bool *visited=new bool[V];
    for(int i=0; i<V; i++) {
        visited[i]=false;
    }

    // queue will store the nodes which we need
    // to visit
    list<int> queue;
    // this iterator can be used to loop over the entites of
    // queue
    list<int> ::iterator i;

    queue.push_back(s);
    visited[s]=true;

    while(!queue.empty()) {
        //take the first item in queue
        s=queue.front();
        cout<< s<<" ";
        queue.pop_front();
        // check all the adjacent nodes
        for(i=adj[s].begin(); i!=adj[s].end(); i++) {
            // if node is not visited put it in
            // the queue
            if(!visited[*i]) {
                visited[*i]=true;
                queue.push_back(*i);
            }
        }
    }


}

int main() {
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.addEdge(2,3);
    g.addEdge(3,3);

    g.BFS(2);
    return 0;
}
