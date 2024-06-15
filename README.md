# algorithmCollection


DIJKSTRAS ALGORITHM:    
DESCRIPTION:
Dijkstra’s Algorithm solves the single-source shortest paths problem. For a
given vertex called the source in the weighted connected graph, the algorithm finds the shortest
paths to all its other vertices. The algorithm finds the shortest path by repeatedly selecting the
nearest unvisited vertex and calculating the distance to all the unvisited neighbouring vertices.
It updates the distance to each vertex when a shorter distance is found.


/////////////////////////////////////////////////////////////////////////////////////////

KURSKALS ALGORITHM :

DESCRIPTION:
Kruskal’s is a greedy algorithm for finding minimum cost spanning tree that
provides an optimal solution. The algorithm begins by sorting the graph’s edges in
nondecreasing order of their weights. Then, starting with the empty subgraph, it scans this
sorted list, adding the next edge on the list to the current subgraph if such an inclusion does not

create a cycle and simply skipping the edge otherwise. It is implemented with help of Union-
Find algorithm which is given as below:

• union (x, y) constructs the union of the disjoint subsets Sx and Sy containing x and y,
respectively, and adds it to the collection to replace Sx and Sy, which are deleted from
it.
• Find(x) returns a subset containing x.


/////////////////////////////////////////////////////////