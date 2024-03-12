#include <stdio.h>

#define MAX_MATRIX_SIZE 100
typedef struct{
    int col;
    int row;
    int val;
}element;
typedef struct{
    element data[MAX_MATRIX_SIZE];
    int cols;
    int rows;
    int terms;
}SparseMatrix;

SparseMatrix Transpose(SparseMatrix a){
    int bindex = 0;
    SparseMatrix b;
    b.rows = a.cols;
    b.cols = a.rows;
    b.terms = a.terms;

    for(int c = 0; c < a.cols; c++){
        for(int i =0; i<a.terms; i++){
            if(a.data[i].col == c){
                b.data[bindex].row = a.data[i].col;
                b.data[bindex].col = a.data[i].rw;
                b.data[bindex++].val = a.data[i].val;
            }
        }
    }
}