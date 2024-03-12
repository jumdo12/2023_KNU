#include <stdio.h>
#include <stdlib.h>

int get_min_vertex(int n){
    int v;
    for(int i=0; i<n; i++){
        if(!visited[i]){
            v = i;
            break;
        }
    }
    for(int i=0; i<n; i++){
        if(!visited[i] && dist[i] < dist[v]){
            v = i;
        }
    }
    return v;
}

void prim(GraphType *g , int s){
    int i , u , v;
    for(u = 0; u < g ->n; u++){
        dist[u] = INF;
    }
    dist[s] = 0;
    for(int i=0; i<g->n; i++){
        u = get_min_vertex(g->n);
        visited[u] = TRUE;
        if(dist[u] == INF)  return;
        printf("%d" , u);
        for(int w =0; w<g->n; w++){
            if(g -> weight[u][v] != INF){
                if(!visted[w] && g->weight[u][w] < dist[w]){
                    dist[w] = g -> weight[u][v];
                }
            }
        }
    }
}