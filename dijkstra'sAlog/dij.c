#include<stdio.h>
#include<conio.h>
#define infinity 999

void dij(int n, int v, int dist[100], int cost[10][10]){
    int i,u,w,min,flag[10],count;

    for(i=0;i<n;i++){
        flag[i]=0;
        dist[i]=cost[v][i];
    }

    flag[v]=1;
    count++;

    for(w=0;w<n;w++){
        if(dist[w]<min && !flag[w]){
            min=dist[w];
            u=w;
        }
    }

    flag[u]=1;
    count=1;
    while(count<n){
        min=infinity;
        for(w=0;w<n;w++){
            if(!flag[w] &&(dist[u]+ cost[u][w] < dist[w])){
                dist[w]=dist[u]+cost[u][w];
            }
        }
    }
}

void main(){
    int i,j,dist[100],cost[10][10], n,v;

    printf("Enter the size of node: \n");
    scanf("%d",&n);

    printf("Enter the matrix cost");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&cost[i][j]);
            if(cost[i][j] == 0 && i != j){
                cost[i][j]=infinity;
            }
        }
    }
}