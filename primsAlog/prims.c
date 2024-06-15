


#include<stdio.h>
void my_prims(int adj[][10], int N){
    int i,j,min,min_cost=0,u=0,v=0,nv;

    int visit[10]={0};
    visit[0]=1;
    nv=1;

    while(nv<N){
        min=999;
        for(i=0;i<N;i++){
            if(visit[i]==1){
                for(j=0;j<N;j++){
                    if(adj[i][j]<min && visit[j]==0){
                        min=adj[i][j];
                        adj[i][j]=999;
                        u=i;
                        v=j;
                    }
                }
            }
        }
        
        if(visit[u]==1 && visit[v]==0){
            visit[v]=1;
            min_cost+=min;
            nv++;
            printf("\nEdges: %d - %d : (%d) \n",u,v,min);
        }
        adj[u][v]=adj[v][u]=999;
    }
    printf("cost %d \n", min_cost);
}

int main(){
    int adj[10][10],n,i,j;
    
    printf("\nEnter the no.of node in the graph: \n");
    scanf("%d",&n);
    
    printf("\n Enter the adjacency matrix: \n");
    
    printf("\n Enter the 0 for no Connection and weight for connection: \n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&adj[i][j]);

            if(adj[i][j]==0 && i != j){
                adj[i][j]=999;
            }
        }
    }
    
    my_prims(adj,n);

    return 0;
}