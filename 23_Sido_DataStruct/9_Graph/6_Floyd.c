#include <stdio.h>
#include <stdlib.h>

void floyd(GraphType *g){
    int i , j , k;
    for(i=0; i<g->n; i++){
        for(j=0; j<g->n; j++){
            A[i][j] = g -> weight[i][j];
        }
    }
    for(k=0; k<g->n; k++){
        for(i=0;i<g->n;i++){
            for(j=0;j<g->n;j++){
                if(A[i][j] > A[i][k] + A[k][j]){
                    A[i][j] = A[i][k] + A[k][j];
                }
            }
        }
    }
}