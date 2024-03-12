#include <stdio.h>
#include <stddlib.h>

int choose(int dist[],int n, int found[]){
    int i , min , minpos;
    min = INT_MAX;
    minpos = -1;
    for(i=0; i<n;i++){
        if(dist[i] < min && !found[i]){
            min = dist[i];
            minpos = i;
        }
    }
    return minpos;
}

void shortes_path(GraphType *g , int start){
    int i , u , w;
    for(i=0; i<g->n; i++){
        dist[i] = g -> weight[start][i];
        found[i]=FALSE;
    }
    found[start] = TRUE;
    dist[start] = 0;
    for(i=0; i<g->n; i++){
        u = choose(g);
        found[u] = TRUE;
        for(w=0;w<g->n; w++){
            if(!found[w]){
                if(dist[u]+g->weight[u][w] < dist[w]){
                    dist[w] = dist[u]+g->weight[u][w];
                }
            }
        }
    }
}