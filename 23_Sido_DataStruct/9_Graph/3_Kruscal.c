#include <stdio.h>
#include <stdlib.h>

void set_find(int curr){
    if(parent[curr] == -1)  return curr;
    while(parent[curr] != -1)   curr = parent[curr];
    return curr;
}

void set_union(int a, int b){
    int root1 = set_find(a);
    int root2 = set_find(b);
    if(root1 != root2){
        parent[root1] = root2;
    }
}

void kruscal(GraphType *g){
    int accepted = 0;
    int uset,vset;
    struct Edge e;

    set_init(g -> n);
    qsort(g->edges,g->n,sizeof(struct Edge),compare);
    int i=0;
    while(accepted < g->n-1){
        e = g -> edges[i];
        uset = set_find(e.start);
        vset = set_find(e.end);
        if(uset != vset){
            printf("%d %d" , e.start , e.end);
            accepted++;
            set_union(uset,vset);
        }
        i++;
    }
}