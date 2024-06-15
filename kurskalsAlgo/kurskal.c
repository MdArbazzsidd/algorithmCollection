#include<stdio.h>

int ne = 1, min_cost = 0;

int find(int i, int parent[]) {
    while (parent[i]) {
        i = parent[i];
    }
    return i;
}

int union1(int i, int j, int parent[]) {
    if (i != j) {
        parent[j] = i;
        return 1;
    }
    return 0;
}

void main() {
    int n, i, j, min, a, u, b, v, cost[20][20], parent[20];

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("\nEnter the cost matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0 && i != j) {
                cost[i][j] = 999; // Replace 0 with a large value to indicate no edge
            }
        }
    }

    for (i = 0; i < n; i++) {
        parent[i] = 0;
    }

    printf("\nThe edges of spanning tree are\n");

    while (ne < n) {
        min = 999;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (cost[i][j] < min) {
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }

        u = find(u, parent);
        v = find(v, parent);

        if (union1(u, v, parent)) {
            printf("Edge %d\t(%d->%d)=%d\n", ne++, a, b, min); 
            min_cost += min;
        }

        cost[a][b] = cost[b][a] = 999; // Remove the edge from consideration
    }

    printf("\nMinimum cost=%d\n", min_cost);
}
