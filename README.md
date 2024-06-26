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


///////////////////////////////////////////////////////////////////////////////////

PRIMS ALGORITHM:

DESCRIPTION:
    Prim’s algorithm constructs a minimum spanning tree through a sequence
    of expanding subtrees. The initial subtree consists of single vertex, selected arbitrarily from the
    set of vertices. On each iteration, the tree is expanded using greedy approach. The algorithm
    stops after all the graph vertices are included in the tree. If number of nodes are N then the
    number of edges in the Minimum Cost Spanning Tree is N-1.

///////////////////////////////////////////////////////////////////////////////////

MERGE SORT ALGORITHM:

DESCRIPTION: Merge sort is a sorting technique that sorts the elements in ascending or
descending order by applying divide-and-conquer technique. It sorts a given array A [0 . . . . n
− 1] by dividing it into two halves A[0..[n/2] − 1] and A[[n/2]..n − 1], sorting each of them
recursively, and then merging the two smaller sorted arrays into a single sorted one. The
merging of two sorted arrays can be done by comparing the elements in two arrays and Copying
the smallest element in the result array.

///////////////////////////////////////////////////////////////////////////////////

QUICK SORT ALGORITHM:

Description: Quick sort is a sorting algorithm that arranges the elements in ascending order or
descending order based on Divide and Conquer Technique. Initially an element is picked as
pivot element and based on the pivot element the remaining elements are rearranged such that
all the elements on the left side will be less than pivot element and all the elements on the right
side will be greater than pivot element. Then quick sort algorithm is recursively applied on the
left partition and right partition.


///////////////////////////////////////////////////////////////////////////////////

SELECTION SORT ALGORITHM:

DESCRIPTION: Selection Sort is a simple and efficient sorting algorithm to sort the elements
in ascending or descending order. It works by repeatedly selecting the smallest (or largest)
element from the unsorted list of elements and moving it to sorted position. The first smallest
element is swapped with first element of the unsorted list and the process is repeated for the
remaining unsorted elements until the entire list is sorted.

EX: Let’s consider the following array as an example: arr[] = {64, 25, 12, 22, 11}

Step 1: [64, 25, 12, 22, 11] // Smallest element is 11

Step 2: [11, | 25, 12, 22, 64] // Swapped to first position with 64

Step 3: [11, | 25, 12, 22, 64] // Smallest element is 12

Step 4: [11, 12, | 25, 22, 64] //Swapped to second position with 25

Step 5: [11, 12, | 25, 22, 64] // Smallest element is 22

Step 6: [11, 12, 22 | 25, 64] // Swapped to third position with 25

Step 7: [11, 12, 22 | 25, 64] // smallest element is 25

Step 8: [11, 12, 22, 25 | 64] // Swapped to fourth position

Step 9: [11, 12, 22, 25, 64|] // Sorted array