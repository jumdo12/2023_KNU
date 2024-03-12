#include <stdio.h>
#include <stdlib.h>

void dfs_mat(GraphType *g, int v){
    visited[v] = TRUE;
    printf("%d" , v);
    for(int w = 0; w < g -> n; w++){
        if(g -> adj_mat[v][w] && !visited[w]){
            dfs(g,w);
        }
    }
}

void dfs_list(GraphType *g , int v){
    visited[v] = TRUE;
    printf("%d" , v);
    for(GraphNode *w = g -> adj_list[v]; w != NULL; w = w -> link){
        if(!visited[w -> vertex]){
            dfs(g , w -> vertex);
        }
    }
}

void bfs_mat(GraphType *g , int v){
    QueueType q;
    init(&q);
    visited[v] = TRUE;
    printf("%d" , v);
    
    enqueue(&q , v);
    while(!is_empty(&q)){
        v = dequeue(&q);
        for(int w = 0; w < g -> n; w++){
            if(!visited[w] && g -> adj_list[v][w]){
                visited[w] = TRUE;
                printf("%d" , w);
                enqueue(&q , w);
            }
        }
    }
}

void bfs_list(GraphType *g , int v){
    QueueType q;

    init(&q);
    visited[v] = TRUE;
    printf("%d" , v);
    enqueue(&q,v);
    while(!is_empty(&q)){
        for(GraphNode* w = g -> adj_list[v]; w; w = w -> link){
            if(!visited[w -> vertex]){
                visited[w -> vertex] = TRUE;
                printf("%d",w -> vertex); 
                enqueue(&q , w -> vertex);
            }
        }
    }
}