#include <stdio.h>
#include <stdlib.h>

typedef struct GraphType{
    int n;
    int adj_mat[MAX][MAX];
}GraphType;

void init(GraphType *g){
    g -> n = 0;
    for(int r= 0; r< MAX; r++){
        for(int c=0 c<MAX; c++){
            g -> adj_mat[r][c] = 0;
        }
    }
}

void insert_vertex(GraphType *g , int v){
    if(g -> n + 1 > MAX){
        fprintf(stderr , "Error");
        exit(1);
    }
    g -> n++;
}

void insert_edge(GraphType *g , int start , int end){
    if(start >= g -> n || end >= g -> n){
        fprintf(stderr , "Error");
        exit(1);
    }
    g -> adj_mat[start][end] = 1;
    g -> adj_mat[end][start] = 1;
}

int main(){
    GraphType *g;
    g = (GraphType*)malloc(sizeof(GraphType));
    init(g);
    for(int i=0; i<4; i++){
        insert_vertex(g,i);
    }
    insert_edge(g,0,1);
    insert_edge(g,0,2);
    free(g);
    
    return 0;
}